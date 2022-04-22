package main

import (
	"io/ioutil"
	"log"
	"path/filepath"
	"time"

	"github.com/conformal/btcrpcclient"
	"github.com/conformal/btcutil"
	"github.com/conformal/btcwire"
)

// Cet exemple illustre une connexion au réseau bitcoin en utilisant des websockets via btcd, l'utilisation de notifications et un appel rpc à getblockcount.
//
// Installez et exécutez btcd :
// 		$ go get github.com/conformal/btcd/...
//		$ btcd -u rpcuser -P rpcpass
//
// Installez btcrpcclient :
// 		$ go get github.com/conformal/btcrpcclient
//
// Exécutez cet exemple :
// 		$ go run websocket-example.go
//
func main() {
	// Ne remplacez les gestionnaires que pour les notifications qui vous intéressent. Notez également que la plupart de ces gestionnaires ne seront appelés que si vous vous inscrivez pour recevoir des notifications. Voir la documentation du type btcrpcclient NotificationHandlers pour plus de détails sur chaque gestionnaire.
	ntfnHandlers := btcrpcclient.NotificationHandlers{
		OnBlockConnected: func(hash *btcwire.ShaHash, height int32) {
			log.Printf("Block connected: %v (%d)", hash, height)
		},
		OnBlockDisconnected: func(hash *btcwire.ShaHash, height int32) {
			log.Printf("Block disconnected: %v (%d)", hash, height)
		},
	}

	// Connectez-vous au serveur RPC btcd local à l'aide de websockets.
	btcdHomeDir := btcutil.AppDataDir("btcd", false)
	certs, err := ioutil.ReadFile(filepath.Join(btcdHomeDir, "rpc.cert"))
	if err != nil {
		log.Fatal(err)
	}
	connCfg := &btcrpcclient.ConnConfig{
		Host:         "localhost:8334",
		Endpoint:     "ws",
		User:         "rpcuser",
		Pass:         "rpcpass",
		Certificates: certs,
	}
	client, err := btcrpcclient.New(connCfg, &ntfnHandlers)
	if err != nil {
		log.Fatal(err)
	}

	// Inscrivez-vous pour bloquer les notifications de connexion et de déconnexion.
	if err := client.NotifyBlocks(); err != nil {
		log.Fatal(err)
	}
	log.Println("NotifyBlocks: Registration Complete")

	// Obtenez le nombre de blocs actuel.
	blockCount, err := client.GetBlockCount()
	if err != nil {
		log.Fatal(err)
	}
	log.Printf("Block count: %d", blockCount)

	// Pour cet exemple, arrêtez correctement le client après 10 secondes.
	// Normalement, le moment d'arrêter le client est très spécifique à l'application.
	log.Println("Client shutdown in 10 seconds...")
	time.AfterFunc(time.Second*10, func() {
		log.Println("Client shutting down...")
		client.Shutdown()
		log.Println("Client shutdown complete.")
	})

	// Attendez que le client s'arrête correctement (ou que l'utilisateur termine le processus avec Ctrl+C).
	client.WaitForShutdown()
}

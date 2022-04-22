package main

import (
	"fmt"
	"os"

	"github.com/conformal/btcnet"
	"github.com/conformal/btcscript"
	"github.com/conformal/btcutil"
)

// Cet exemple illustre la création d'un script qui paie à une adresse bitcoin. Il imprime également le script hexadécimal créé et utilise la fonction DisasmString pour afficher le script désassemblé.

func main() {
	addressStr := "12gpXQVcCL2qhTNQgyLVdCFG2Qs2px98nV"

	PayToAddrScript(addressStr)
	// Output:
	// Script Hex: 76a914128004ff2fcaf13b2b91eb654b1dc2b674f7ec6188ac
	// Script Disassembly: OP_DUP OP_HASH160 128004ff2fcaf13b2b91eb654b1dc2b674f7ec61 OP_EQUALVERIFY OP_CHECKSIG
}

func PayToAddrScript(addressStr string) {
	// Analyse l'adresse à laquelle envoyer les pièces dans un btcutil.Address qui est utile pour garantir l'exactitude de l'adresse et déterminer le type d'adresse. Il est également requis pour l'appel à venir à PayToAddrScript.
	address, err := btcutil.DecodeAddress(addressStr, &btcnet.MainNetParams)
	handle(err)

	// Créez un script de clé publique qui paie à l'adresse.
	script, err := btcscript.PayToAddrScript(address)
	handle(err)
	fmt.Printf("Script Hex: %x\n", script)

	disasm, err := btcscript.DisasmString(script)
	handle(err)
	fmt.Println("Script Disassembly:", disasm)
}

func handle(err error) {
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}

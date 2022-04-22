from bitcoin.rpc import RawProxy

# Créer une connexion au nœud local Bitcoin Core
p = RawProxy()

# Exécutez la commande getinfo, stockez les données résultantes dans info
info = p.getinfo()

# Récupérer l'élément 'blocks' de l'info
print(info['blocks'])

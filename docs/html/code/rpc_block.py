from bitcoin.rpc import RawProxy

p = RawProxy()

# La hauteur du bloc où la transaction d'Alice a été enregistrée
blockheight = 277316

# Obtenez le hachage de bloc du bloc de hauteur 277316
blockhash = p.getblockhash(blockheight)

# Récupérer le bloc par son hachage
block = p.getblock(blockhash)

# L'élément tx contient la liste de tous les ID de transaction dans le bloc
transactions = block['tx']

block_value = 0

# Itérer à travers chaque ID de transaction dans le bloc
for txid in transactions:
    tx_value = 0
    # Récupérer la transaction brute par ID
    raw_tx = p.getrawtransaction(txid)
    # Décoder la transaction
    decoded_tx = p.decoderawtransaction(raw_tx)
    # Itérer à travers chaque sortie de la transaction
    for output in decoded_tx['vout']:
        # Additionnez la valeur de chaque sortie
        tx_value = tx_value + output['value']
        
    # Ajouter la valeur de cette transaction au total
    block_value = block_value + tx_value

print("Total value in block: ", block_value)
    



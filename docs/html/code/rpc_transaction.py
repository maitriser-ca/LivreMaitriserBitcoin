from bitcoin.rpc import RawProxy

p = RawProxy()

# ID de transaction d'Alice
txid = "0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2"

# Tout d'abord, récupérez la transaction brute en hexadécimal
raw_tx = p.getrawtransaction(txid)

# Décodez l'hex de transaction en un objet JSON
decoded_tx = p.decoderawtransaction(raw_tx)

# Récupérer chacune des sorties de la transaction
for output in decoded_tx['vout']:
    print(output['scriptPubKey']['addresses'], output['value'])

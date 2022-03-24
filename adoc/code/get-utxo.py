# get unspent outputs from blockchain API

import json
import requests

# exemple d'adresse
address = '1Dorian4RoXcnBv9hnQ4Y2C1an6NJ4UrjX'

# L'URL de l'API est https://blockchain.info/unspent?active=<address>
# Il renvoie un objet JSON avec une liste "unspent_outputs", contenant UTXO, comme ceci :
#{	"unspent_outputs":[
#   {
#     "tx_hash":"ebadfaa92f1fd29e2fe296eda702c48bd11ffd52313e986e99ddad9084062167",
#     "tx_index":51919767,
#     "tx_output_n": 1,
#     "script":"76a9148c7e252f8d64b0b6e313985915110fcfefcf4a2d88ac",
#     "value": 8000000,
#     "value_hex": "7a1200",
#     "confirmations":28691
#   },
# ...
#]}

resp = requests.get('https://blockchain.info/unspent?active=%s' % address)
utxo_set = json.loads(resp.text)["unspent_outputs"]

for utxo in utxo_set:
    print "%s:%d - %ld Satoshis" % (utxo['tx_hash'], utxo['tx_output_n'], utxo['value'])

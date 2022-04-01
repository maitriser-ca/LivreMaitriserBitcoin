
# exemple d'itération d'un nonce dans l'entrée d'un algorithme de hachage

import hashlib
    
text = "I am Satoshi Nakamoto"

# itérer nonce de 0 à 19
for nonce in xrange(20): 
    
    # ajouter le nonce à la fin du texte
    input = text + str(nonce) 
     
    # calculer le hachage SHA-256 de l'entrée (texte + nonce)
    hash = hashlib.sha256(input).hexdigest() 
    
    # afficher l'entrée et le résultat du hachage
    print input, '=>',  hash 
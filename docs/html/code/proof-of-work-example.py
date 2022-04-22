#!/usr/bin/env python
# exemple d'algorithme de preuve de travail

import hashlib
import time

max_nonce = 2 ** 32 # 4 billion

def proof_of_work(header, difficulty_bits):
    
    # calculer l'objectif de difficulté
    target = 2 ** (256-difficulty_bits)
    
    for nonce in xrange(max_nonce):
        hash_result = hashlib.sha256(str(header)+str(nonce)).hexdigest()
        
        # vérifier s'il s'agit d'un résultat valide, en dessous de la cible
        if long(hash_result, 16) < target:
            print "Success with nonce %d" % nonce
            print "Hash is %s" % hash_result
            return (hash_result,nonce)
            
    print "Failed after %d (max_nonce) tries" % nonce
    return nonce

    
if __name__ == '__main__':
    
    nonce = 0
    hash_result = ''
     
    # difficulté de 0 à 31 bits
    for difficulty_bits in xrange(32):
        
        difficulty = 2 ** difficulty_bits
        print "Difficulty: %ld (%d bits)" % (difficulty, difficulty_bits)
    
        print "Starting search..."
        
        # point de contrôle de l'heure actuelle
        start_time = time.time()
        
        # faire un nouveau bloc qui inclut le hachage du bloc précédent nous simulons un bloc de transactions - juste une chaîne
        new_block = 'test block with transactions' + hash_result 
        
        # trouver un nonce valide pour le nouveau bloc
        (hash_result, nonce) = proof_of_work(new_block, difficulty_bits) 
        
        # point de contrôle combien de temps il a fallu pour trouver un résultat
        end_time = time.time()
        
        elapsed_time = end_time - start_time
        print "Elapsed Time: %.4f seconds" % elapsed_time
    
        if elapsed_time > 0:
            
            # estimer les hachages par seconde
            hash_power = float(long(nonce)/elapsed_time)
            print "Hashing Power: %ld hashes per second" % hash_power
    
    
    
#include <random>
#include <bitcoin/bitcoin.hpp>

// La chaîne que nous recherchons
const std::string search = "1kid";

// Générer une clé secrète aléatoire. Un 32 octets aléatoires.
bc::ec_secret random_secret(std::default_random_engine& engine);
// Extraire l'adresse Bitcoin d'un secret EC.
std::string bitcoin_address(const bc::ec_secret& secret);
// Comparaison insensible à la casse avec la chaîne de recherche.
bool match_found(const std::string& address);

int main()
{
    // random_device sous Linux utilise "/dev/urandom"
    // ATTENTION : selon la mise en œuvre, ce RNG peut ne pas être suffisamment sécurisé !
    // Ne pas utiliser les clés personnalisées générées par cet exemple en production
    std::random_device random;
    std::default_random_engine engine(random());
    
    // Boucle en continu...
    while (true)
    {
        // Générer un secret aléatoire.
        bc::ec_secret secret = random_secret(engine);
        // Obtenez l'adresse.
        std::string address = bitcoin_address(secret);
        // Correspond-il à votre chaîne de recherche ? (1kid)
        if (match_found(address))
        {
            // Succès!
            std::cout << "Found vanity address! " << address << std::endl;
            std::cout << "Secret: " << bc::encode_base16(secret) << std::endl;
            return 0;
        }
    }
    // Ne devrait jamais arriver ici !
    return 0;
}

bc::ec_secret random_secret(std::default_random_engine& engine)
{
    // Créer un nouveau secret...
    bc::ec_secret secret;
    // Itérer sur chaque octet en définissant une valeur aléatoire...
    for (uint8_t& byte: secret)
        byte = engine() % std::numeric_limits<uint8_t>::max();
    // Renvoyer le résultat.
    return secret;
}

std::string bitcoin_address(const bc::ec_secret& secret)
{
    // Convertir le secret en adresse de paiement
    bc::wallet::ec_private private_key(secret);
    bc::wallet::payment_address payaddr(private_key);
    // Retourner le formulaire encodé.
    return payaddr.encoded();
}

bool match_found(const std::string& address)
{
    auto addr_it = address.begin();
    // Parcourez la chaîne de recherche en la comparant au caractère minuscule de l'adresse fournie.
    for (auto it = search.begin(); it != search.end(); ++it, ++addr_it)
        if (*it != std::tolower(*addr_it))
            return false;
    // Fin de la chaîne de recherche atteinte, donc l'adresse correspond.
    return true;
}


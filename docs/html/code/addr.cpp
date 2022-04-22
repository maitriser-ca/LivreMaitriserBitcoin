#include <bitcoin/bitcoin.hpp>

int main()
{
    // Chaîne de clé secrète privée en base16
    bc::ec_secret decoded;
    bc::decode_base16(decoded,
        "038109007313a5807b2eccc082c8c3fbb988a973cacf1a7df9ce725c31b14776");

    bc::wallet::ec_private secret(
        decoded, bc::wallet::ec_private::mainnet_p2kh);

    // Obtenir la clé publique.
    bc::wallet::ec_public public_key(secret);
    std::cout << "Public key: " << public_key.encoded() << std::endl;

    // Créer une adresse Bitcoin.
    // Normalement, vous pouvez utiliser :
    //    bc::wallet::payment_address payaddr =
    //        public_key.to_payment_address(
    //            bc::wallet::ec_public::mainnet_p2kh);
    //  const std::string address = payaddr.encoded();

    // Calcule le hachage de la clé publique pour l'adresse P2PKH.
    bc::data_chunk public_key_data;
    public_key.to_data(public_key_data);
    const auto hash = bc::bitcoin_short_hash(public_key_data);

    bc::data_chunk unencoded_address;
    // Réserver 25 octets
    //   [ version:1  ]
    //   [ hash:20    ]
    //   [ checksum:4 ]
    unencoded_address.reserve(25);
    // Octet de version, 0 est l'adresse BTC normale (P2PKH).
    unencoded_address.push_back(0);
    // Données de hachage
    bc::extend_data(unencoded_address, hash);
    // La somme de contrôle est calculée en hachant les données et en ajoutant 4 octets à partir du hachage.
    bc::append_checksum(unencoded_address);
    // Enfin, nous devons encoder le résultat dans l'encodage base58 de Bitcoin.
    assert(unencoded_address.size() == 25);
    const std::string address = bc::encode_base58(unencoded_address);

    std::cout << "Address: " << address << std::endl;
    return 0;
}


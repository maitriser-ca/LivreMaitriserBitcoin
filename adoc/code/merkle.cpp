#include <bitcoin/bitcoin.hpp>

bc::hash_digest create_merkle(bc::hash_list& merkle)
{
    // Arrête si la liste de hachage est vide.
    if (merkle.empty())
        return bc::null_hash;
    else if (merkle.size() == 1)
        return merkle[0];

    // Tant qu'il y a plus d'un hachage dans la liste, continuez à boucler...
    while (merkle.size() > 1)
    {
        // Si le nombre de hachages est impair, dupliquez le dernier hachage de la liste.
        if (merkle.size() % 2 != 0)
            merkle.push_back(merkle.back());
        // La taille de la liste est désormais égale.
        assert(merkle.size() % 2 == 0);

        // Nouvelle liste de hachage.
        bc::hash_list new_merkle;
        // Parcourez les hachages 2 à la fois.
        for (auto it = merkle.begin(); it != merkle.end(); it += 2)
        {
            // Joindre les deux hachages actuels ensemble (concaténer).
            bc::data_chunk concat_data(bc::hash_size * 2);
            auto concat = bc::serializer<
                decltype(concat_data.begin())>(concat_data.begin());
            concat.write_hash(*it);
            concat.write_hash(*(it + 1));
            // Hachez les deux hachages.
            bc::hash_digest new_root = bc::bitcoin_hash(concat_data);
            // Ajoutez ceci à la nouvelle liste.
            new_merkle.push_back(new_root);
        }
        // C'est la nouvelle liste.
        merkle = new_merkle;

        // DEBUG output -------------------------------------
        std::cout << "Current merkle hash list:" << std::endl;
        for (const auto& hash: merkle)
            std::cout << "  " << bc::encode_base16(hash) << std::endl;
        std::cout << std::endl;
        // --------------------------------------------------
    }
    // Finalement, nous nous retrouvons avec un seul élément.
    return merkle[0];
}

int main()
{
    // Remplacez ces hachages par ceux d'un bloc pour reproduire la même racine merkle.
    bc::hash_list tx_hashes{{
        bc::hash_literal("0000000000000000000000000000000000000000000000000000000000000000"),
        bc::hash_literal("0000000000000000000000000000000000000000000000000000000000000011"),
        bc::hash_literal("0000000000000000000000000000000000000000000000000000000000000022"),
    }};
    const bc::hash_digest merkle_root = create_merkle(tx_hashes);
    std::cout << "Result: " << bc::encode_base16(merkle_root) << std::endl;
    return 0;
}


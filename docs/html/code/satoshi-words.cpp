/*
  Affichez le message du bloc de genèse de Satoshi.
*/
#include <iostream>
#include <bitcoin/bitcoin.hpp>

int main()
{
    // Créer un bloc de genèse.
    bc::chain::block block = bc::chain::block::genesis_mainnet();
    // Le bloc de genèse contient une seule transaction coinbase.
    assert(block.transactions().size() == 1);
    // Obtenez la première transaction du bloc (coinbase).
    const bc::chain::transaction& coinbase_tx = block.transactions()[0];
    // Coinbase tx a une seule entrée.
    assert(coinbase_tx.inputs().size() == 1);
    const bc::chain::input& coinbase_input = coinbase_tx.inputs()[0];
    // Convertissez le script d'entrée dans son format brut.
    const auto prefix = false;
    const bc::data_chunk& raw_message = coinbase_input.script().to_data(prefix);
    // Convertissez ceci en std::string.
    std::string message(raw_message.begin(), raw_message.end());
    // Affichez le message du bloc de genèse.
    std::cout << message << std::endl;
    return 0;
}

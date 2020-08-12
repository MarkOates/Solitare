

#include <DeckFactory.hpp>





DeckFactory::DeckFactory()
{
}


DeckFactory::~DeckFactory()
{
}


Deck DeckFactory::generate_classic_52_playing_card_deck()
{
Deck result = {}; for (unsigned i=0; i<52; i++) { result.put_card_on_top_of_deck(Card()); } return result;
}



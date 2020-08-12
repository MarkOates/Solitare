

#include <DeckFactory.hpp>





DeckFactory::DeckFactory()
{
}


DeckFactory::~DeckFactory()
{
}


Deck DeckFactory::generate_classic_52_playing_card_deck()
{
// "When you first open a deck, you'll usually see the Jokers at the face, followed by the // Spades and Diamonds in ascending order, then the Clubs and Hearts in descending order. // At the very back or top of the deck, you'll get a few ad cards - or perhaps a double // backer or gimmick card, depending on the deck." // // - https://ambitiouswithcards.com/new-deck-order
Deck result = {}; for (unsigned i=0; i<52; i++) { result.put_card_on_top_of_deck(Card()); } return result;
}



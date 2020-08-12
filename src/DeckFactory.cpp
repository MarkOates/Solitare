

#include <DeckFactory.hpp>
#include <iostream>




DeckFactory::DeckFactory()
{
}


DeckFactory::~DeckFactory()
{
}


Deck DeckFactory::generate_classic_52_playing_card_deck()
{
// "When you first open a deck, you'll usually see the Jokers at the face, followed by the
// Spades and Diamonds in ascending order, then the Clubs and Hearts in descending order.
// At the very back or top of the deck, you'll get a few ad cards - or perhaps a double
// backer or gimmick card, depending on the deck."
//
// - https://ambitiouswithcards.com/new-deck-order

Deck result = {};

// 2 jokers
// result.put_card_on_top_of_deck(Card(0, 0));
// result.put_card_on_top_of_deck(Card(0, 0));

// Spades in ascending order
for (int value=1; value<=13; value++)
{
   result.put_card_on_top_of_deck(Card(value, 1));
}

// Diamonds in ascending order
for (unsigned value=1; value<=13; value++)
{
   result.put_card_on_top_of_deck(Card(value, 2));
}

// Clubs in descending order
for (unsigned value=13; value>0; value--)
{
   result.put_card_on_top_of_deck(Card(value, 3));
}

// Hearts in descending order
for (unsigned value=13; value>0; value--)
{
   result.put_card_on_top_of_deck(Card(value, 4));
}

return result;

}



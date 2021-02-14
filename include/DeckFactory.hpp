#pragma once


#include <Deck.hpp>


class DeckFactory
{
private:

public:
   DeckFactory();
   ~DeckFactory();

   static Deck generate_standard_52_card_deck();
};




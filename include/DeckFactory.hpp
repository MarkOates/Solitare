#pragma once


#include <Deck.hpp>


class DeckFactory
{
private:

public:
   DeckFactory();
   ~DeckFactory();


static Deck generate_classic_52_playing_card_deck();
};




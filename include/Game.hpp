#pragma once


#include <Deck.hpp>


class Game
{
private:
   Deck deck;

public:
   Game();
   ~Game();


   Deck get_deck();
void start();
int deck_num_cards();
};




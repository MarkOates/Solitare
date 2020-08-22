#pragma once


#include <Card.hpp>
#include <Deck.hpp>
#include <tuple>
#include <vector>


class Game
{
private:
   Deck deck;
   std::vector<std::vector<std::tuple<bool, Card>>> tableau;

public:
   Game();
   ~Game();


   Deck get_deck();
   std::vector<std::vector<std::tuple<bool, Card>>> get_tableau();
void start();
int deck_num_cards();
};




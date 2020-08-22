#pragma once


#include <Card.hpp>
#include <Deck.hpp>
#include <tuple>
#include <vector>


class Game
{
private:
   Deck stock;
   std::vector<std::vector<std::tuple<bool, Card>>> tableau;
   std::vector<std::vector<std::tuple<bool, Card>>> foundations;

public:
   Game();
   ~Game();


   Deck get_stock();
   std::vector<std::vector<std::tuple<bool, Card>>> get_tableau();
   std::vector<std::vector<std::tuple<bool, Card>>> get_foundations();
void start();
int stock_num_cards();
};




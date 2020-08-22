#pragma once


#include <Card.hpp>
#include <Deck.hpp>
#include <tuple>
#include <vector>


class Game
{
private:
   Deck stock;
   std::vector<Card> waste;
   std::vector<std::vector<std::tuple<bool, Card>>> tableau;
   std::vector<std::vector<std::tuple<bool, Card>>> foundations;

public:
   Game();
   ~Game();


   Deck get_stock();
   std::vector<Card> get_waste();
   std::vector<std::vector<std::tuple<bool, Card>>> get_tableau();
   std::vector<std::vector<std::tuple<bool, Card>>> get_foundations();
void start();
void place_top_stock_card_on_waste();
void place_top_waste_card_on_foundation(int foundation_index_num=0);
int stock_num_cards();
};




#pragma once


#include <Card.hpp>
#include <string>
#include <vector>


class Deck
{
private:
   std::vector<Card> cards;

public:
   Deck();
   ~Deck();


   std::vector<Card> get_cards();
std::string shuffle();
Card draw_card();
bool is_empty();
};




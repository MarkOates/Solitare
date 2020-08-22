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
void put_card_on_top_of_deck(Card card={});
std::string shuffle();
Card draw_card();
bool empty();
bool clear();
int num_cards();
};




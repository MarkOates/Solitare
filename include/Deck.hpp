#pragma once


#include <Card.hpp>
#include <vector>


class Deck
{
private:
   std::vector<Card> cards;

public:
   Deck();
   ~Deck();

   std::vector<Card> get_cards();
   void put_card_on_top(Card card={});
   void shuffle();
   Card draw_card();
   bool empty();
   bool clear();
   int num_cards();
};




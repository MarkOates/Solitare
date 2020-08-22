

#include <Deck.hpp>
#include <random>
#include <algorithm>
#include <stdexcept>
#include <sstream>




Deck::Deck()
   : cards({})
{
}


Deck::~Deck()
{
}


std::vector<Card> Deck::get_cards()
{
   return cards;
}


void Deck::put_card_on_top_of_deck(Card card)
{
cards.push_back(card);
return;

}

void Deck::shuffle()
{
std::random_device rd;
std::mt19937 g(rd());

std::shuffle(cards.begin(), cards.end(), g);

}

Card Deck::draw_card()
{
if (!((!cards.empty())))
   {
      std::stringstream error_message;
      error_message << "Deck" << "::" << "draw_card" << ": error: " << "guard \"(!cards.empty())\" not met";
      throw std::runtime_error(error_message.str());
   }
Card card = cards.back();
cards.pop_back();
return card;

}

bool Deck::empty()
{
return cards.empty();
}

bool Deck::clear()
{
cards.clear();
return true;

}

int Deck::num_cards()
{
return cards.size();
}



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


std::string run();
};




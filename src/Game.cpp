

#include <Game.hpp>
#include <DeckFactory.hpp>




Game::Game()
   : stock({})
   , waste({})
   , tableau({})
   , foundations({})
{
}


Game::~Game()
{
}


Deck Game::get_stock()
{
   return stock;
}


std::vector<Card> Game::get_waste()
{
   return waste;
}


std::vector<std::vector<std::tuple<bool, Card>>> Game::get_tableau()
{
   return tableau;
}


std::vector<std::vector<std::tuple<bool, Card>>> Game::get_foundations()
{
   return foundations;
}


void Game::start()
{
stock = DeckFactory::generate_classic_52_playing_card_deck();

tableau.clear();
tableau.resize(7);

waste.clear();

foundations.clear();
foundations.resize(4);

return;

}

int Game::stock_num_cards()
{
return stock.num_cards();

}



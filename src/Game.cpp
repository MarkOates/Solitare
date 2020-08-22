

#include <Game.hpp>
#include <DeckFactory.hpp>




Game::Game()
   : deck({})
   , tableau({})
{
}


Game::~Game()
{
}


Deck Game::get_deck()
{
   return deck;
}


std::vector<std::vector<std::tuple<bool, Card>>> Game::get_tableau()
{
   return tableau;
}


void Game::start()
{
deck = DeckFactory::generate_classic_52_playing_card_deck();
tableau.clear();
tableau.resize(7);
return;

}

int Game::deck_num_cards()
{
return deck.num_cards();

}





#include <Game.hpp>
#include <DeckFactory.hpp>




Game::Game()
   : deck({})
{
}


Game::~Game()
{
}


Deck Game::get_deck()
{
   return deck;
}


void Game::start()
{
deck = DeckFactory::generate_classic_52_playing_card_deck();
return;

}

int Game::deck_num_cards()
{
return deck.num_cards();

}



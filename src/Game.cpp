

#include <Game.hpp>
#include <DeckFactory.hpp>




Game::Game()
   : deck({})
   , row_stacks({})
{
}


Game::~Game()
{
}


Deck Game::get_deck()
{
   return deck;
}


std::vector<std::vector<std::tuple<bool, Card>>> Game::get_row_stacks()
{
   return row_stacks;
}


void Game::start()
{
deck = DeckFactory::generate_classic_52_playing_card_deck();
row_stacks.clear();
row_stacks.resize(7);
return;

}

int Game::deck_num_cards()
{
return deck.num_cards();

}



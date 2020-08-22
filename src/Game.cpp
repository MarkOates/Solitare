

#include <Game.hpp>
#include <DeckFactory.hpp>




Game::Game()
   : stock({})
   , waste({})
   , tableau({})
   , foundations({})
   , state("playing")
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

set_state_playing();

return;

}

void Game::flip_topmost_card_on_tableau_column_to_face_up(int tableau_column_num)
{
// TODO
return;

}

void Game::place_top_stock_card_on_waste()
{
// TODO
return;

}

void Game::place_top_waste_card_on_foundation(int foundation_index_num)
{
// TODO
return;

}

void Game::replenish_waste_with_stock()
{
// TODO
return;

}

void Game::move_cards_from_tableau_row_to_other_tableau_row(int source_tableau_column_num, int destination_tableau_column_num, int num_cards_from_topmost_card)
{
// TODO
return;

}

void Game::move_topmost_tableau_row_card_to_foundation(int tableau_column_num)
{
// TODO
return;

}

void Game::set_state_playing()
{
state = "playing";
return;

}

void Game::check_game_win_or_lose()
{
// TODO
return;

}

void Game::set_state_game_won()
{
state = "game_won";
return;

}

void Game::set_state_game_lost()
{
state = "game_over";
return;

}

int Game::stock_num_cards()
{
return stock.num_cards();

}



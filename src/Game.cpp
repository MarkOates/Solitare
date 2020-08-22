

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


Deck Game::get_waste()
{
   return waste;
}


std::vector<std::vector<std::tuple<bool, Card>>> Game::get_tableau()
{
   return tableau;
}


std::vector<std::vector<Deck>> Game::get_foundations()
{
   return foundations;
}


void Game::start()
{
// Rules of solitare: https://bicyclecards.com/how-to-play/solitaire/

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
// tableau_column_num must be valid
if (tableau_column_num < 0 || tableau_column_num >= tableau.size())
{
   throw std::runtime_error("invalid tableau_column_num");
}

// if topmost card is already flipped up, just return

// TODO
return;

}

void Game::place_top_stock_card_on_waste()
{
// if stock is empty, raise exception

// TODO
return;

}

void Game::place_top_waste_card_on_foundation(int foundation_index_num)
{
// if waste is empty, raise exception
// if top waste card does not fit onto any foundations, raise exception

// TODO
return;

}

void Game::replenish_stock_with_waste()
{
// stock must be empty
// waste must not be empty

// TODO
return;

}

void Game::move_cards_from_tableau_row_to_other_tableau_row(int source_tableau_column_num, int destination_tableau_column_num, int num_cards_from_topmost_card)
{
// source_tableau_column_num must be valid
// destination_tableau_column_num must be valid
// num_cards_from_topmost_card must not exceed size of cards in tableau row
// num_cards_from_topmost_card must be face up

// TODO
return;

}

void Game::move_topmost_tableau_row_card_to_foundation(int tableau_column_num)
{
// tableau_column_num must be valid
// tableau_column_num must not be empty
// the topmost card in the tableau_column_num must be face-up

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



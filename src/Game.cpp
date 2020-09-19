

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

stock = DeckFactory::generate_standard_52_card_deck();
stock.shuffle();

tableau.clear();
tableau.resize(7);

waste.clear();

foundations.clear();
foundations.resize(4);

deal_cards();

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

// tableau column cannot be empty
std::vector<std::tuple<bool, Card>> &tableau_column = tableau[tableau_column_num];
if (tableau_column.empty())
{
   throw std::runtime_error("tableau_column is empty");
}

// if topmost card is already flipped up, just return
std::tuple<bool, Card> &topmost_card = tableau_column.back();

// if topmost card is already flipped up, just return
if (std::get<0>(topmost_card) == true) return;

// flip the to face up
std::get<0>(topmost_card) = true;

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

void Game::move_cards_from_tableau_column_to_other_tableau_column(int source_tableau_column_num, int destination_tableau_column_num, int num_cards_from_topmost_card)
{
// source_tableau_column_num must be valid
// destination_tableau_column_num must be valid
// num_cards_from_topmost_card must not exceed size of cards in tableau column
// num_cards_from_topmost_card must be face up

// TODO
return;

}

void Game::move_topmost_tableau_column_card_to_foundation(int tableau_column_num)
{
// tableau_column_num must be valid
// tableau_column_num must not be empty
// the topmost card in the tableau_column_num must be face-up

// TODO
return;

}

void Game::deal_cards()
{
// deal the cards to all the columns
for (unsigned column=0; column<tableau.size(); column++)
{
   std::vector<std::tuple<bool, Card>> &tableau_column = tableau[column];
   for (unsigned i=0; i<(column+1); i++)
   {
      Card card_to_place_on_column = stock.draw_card();
      tableau_column.push_back(std::tuple<bool, Card>(false, card_to_place_on_column));
   }
}

// flip the first card on each column
for (unsigned column=0; column<tableau.size(); column++)
{
   flip_topmost_card_on_tableau_column_to_face_up(column);
}
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



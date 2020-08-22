#pragma once


#include <Card.hpp>
#include <Deck.hpp>
#include <string>
#include <tuple>
#include <vector>


class Game
{
private:
   Deck stock;
   Deck waste;
   std::vector<std::vector<std::tuple<bool, Card>>> tableau;
   std::vector<std::vector<Deck>> foundations;
   std::string state;

public:
   Game();
   ~Game();


   Deck get_stock();
   Deck get_waste();
   std::vector<std::vector<std::tuple<bool, Card>>> get_tableau();
   std::vector<std::vector<Deck>> get_foundations();
void start();
void flip_topmost_card_on_tableau_column_to_face_up(int tableau_column_num=0);
void place_top_stock_card_on_waste();
void place_top_waste_card_on_foundation(int foundation_index_num=0);
void replenish_stock_with_waste();
void move_cards_from_tableau_row_to_other_tableau_row(int source_tableau_column_num=0, int destination_tableau_column_num=0, int num_cards_from_topmost_card=0);
void move_topmost_tableau_row_card_to_foundation(int tableau_column_num=0);
void deal_cards();
void set_state_playing();
void check_game_win_or_lose();
void set_state_game_won();
void set_state_game_lost();
int stock_num_cards();
};




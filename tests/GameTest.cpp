
#include <gtest/gtest.h>

#include <Game.hpp>

TEST(GameTest, can_be_created_without_blowing_up)
{
   Game game;
}

TEST(GameTest, stock__has_a_getter_and_is_initialized_as_empty)
{
   Game game;
   ASSERT_EQ(0, game.stock_num_cards());
}

TEST(GameTest, start__create_a_new_shuffled_52_card_deck)
{
   Game game;
   game.start();
   ASSERT_EQ(52, game.stock_num_cards());
}

TEST(GameTest, start__will_create_7_empty_piles_for_the_tableau)
{
   Game game;
   game.start();
   std::vector<std::vector<std::tuple<bool, Card>>> tableau = game.get_tableau();
   ASSERT_EQ(7, tableau.size());

   for (auto &row_stack : tableau)
   {
      ASSERT_EQ(true, row_stack.empty());
   }
}

TEST(GameTest, start__will_create_4_empty_piles_for_the_foundations)
{
   Game game;
   game.start();
   std::vector<std::vector<std::tuple<bool, Card>>> foundations = game.get_foundations();
   ASSERT_EQ(4, foundations.size());

   for (auto &row_stack : foundations)
   {
      ASSERT_EQ(true, row_stack.empty());
   }
}


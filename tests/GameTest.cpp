
#include <gtest/gtest.h>

#include <Game.hpp>

TEST(GameTest, can_be_created_without_blowing_up)
{
   Game game;
}

TEST(GameTest, deck__has_a_getter_and_is_initialized_as_empty)
{
   Game game;
   ASSERT_EQ(0, game.deck_num_cards());
}

TEST(GameTest, start__create_a_new_shuffled_52_card_deck)
{
   Game game;
   game.start();
   ASSERT_EQ(52, game.deck_num_cards());
}


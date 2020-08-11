
#include <gtest/gtest.h>

#include <Game.hpp>

TEST(GameTest, can_be_created_without_blowing_up)
{
   Game game;
}

TEST(GameTest, run__returns_the_expected_response)
{
   Game game;
   std::string expected_string = "Hello World!";
   EXPECT_EQ(expected_string, game.run());
}

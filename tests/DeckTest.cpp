
#include <gtest/gtest.h>

#include <Deck.hpp>

TEST(DeckTest, can_be_created_without_blowing_up)
{
   Deck deck;
}

TEST(DeckTest, run__returns_the_expected_response)
{
   Deck deck;
   std::string expected_string = "Hello World!";
   EXPECT_EQ(expected_string, deck.run());
}

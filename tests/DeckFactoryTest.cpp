
#include <gtest/gtest.h>

#include <DeckFactory.hpp>

TEST(DeckFactoryTest, can_be_created_without_blowing_up)
{
   DeckFactory deck_factory;
}

TEST(DeckFactoryTest, run__returns_the_expected_response)
{
   DeckFactory deck_factory;
   std::string expected_string = "Hello World!";
   EXPECT_EQ(expected_string, deck_factory.run());
}


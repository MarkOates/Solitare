
#include <gtest/gtest.h>

#include <Card.hpp>

TEST(CardTest, can_be_created_without_blowing_up)
{
   Card card;
}

TEST(CardTest, run__returns_the_expected_response)
{
   Card card;
   std::string expected_string = "Hello World!";
   EXPECT_EQ(expected_string, card.run());
}

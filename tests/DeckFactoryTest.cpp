
#include <gtest/gtest.h>

#include <DeckFactory.hpp>

TEST(DeckFactoryTest, can_be_created_without_blowing_up)
{
   DeckFactory deck_factory;
}

TEST(DeckFactoryTest, generate_standard_52_card_deck)
{
   Deck deck = DeckFactory::generate_standard_52_card_deck();
   ASSERT_EQ(52, deck.num_cards());
}


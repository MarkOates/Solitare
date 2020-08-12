
#include <gtest/gtest.h>

#include <DeckFactory.hpp>

TEST(DeckFactoryTest, can_be_created_without_blowing_up)
{
   DeckFactory deck_factory;
}

TEST(DeckFactoryTest, generate_classic_52_playing_card_deck)
{
   Deck deck = DeckFactory::generate_classic_52_playing_card_deck();
   ASSERT_EQ(52, deck.num_cards());
}



#include <gtest/gtest.h>

#include <Deck.hpp>

TEST(DeckTest, can_be_created_without_blowing_up)
{
   Deck deck;
}

TEST(DeckTest, shuffle__will_randomize_the_order_of_the_cards)
{
   // TODO
}

TEST(DeckTest, draw_card__will_return_the_last_card_in_the_deck__and_remove_it_from_the_deck)
{
   // TODO
}

TEST(DeckTest, draw_card__when_the_deck_is_empty__will_throw_an_error)
{
   // TODO
}

TEST(DeckTest, is_empty__will_return_true_if_there_are_no_more_cards_in_the_deck)
{
   // TODO
}

TEST(DeckTest, is_empty__will_return_false_if_there_card_in_the_deck)
{
   // TODO
}


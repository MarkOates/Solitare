
#include <gtest/gtest.h>

#include <Deck.hpp>

TEST(DeckTest, can_be_created_without_blowing_up)
{
   Deck deck;
}

TEST(DeckTest, cards__initializs_to_empty)
{
   Deck deck;
   ASSERT_EQ(true, deck.get_cards().empty());
}

TEST(DeckTest, put_card_on_top__will_place_a_card_on_the_deck)
{
   Deck deck;
   deck.put_card_on_top(Card());
   ASSERT_EQ(false, deck.get_cards().empty());
   ASSERT_EQ(1, deck.num_cards());
}

TEST(DeckTest, clear__will_remove_all_cards_from_the_deck)
{
   Deck deck;

   deck.put_card_on_top(Card());
   deck.put_card_on_top(Card());
   deck.put_card_on_top(Card());

   deck.clear();

   ASSERT_EQ(0, deck.num_cards());
}

TEST(DeckTest, shuffle__on_an_empty_deck_will_do_nothing)
{
   Deck deck;
   deck.shuffle();
   SUCCEED();
}

TEST(DeckTest, shuffle__will_randomize_the_order_of_the_cards)
{
   // TODO
}

TEST(DeckTest, draw_card__will_return_the_last_card_in_the_deck__and_remove_it_from_the_deck)
{
   // TODO
}

TEST(DeckTest, draw_card__when_the_deck_empty__will_throw_an_error)
{
   // TODO
}

TEST(DeckTest, empty__will_return_true_if_there_are_no_more_cards_in_the_deck)
{
   // TODO
}

TEST(DeckTest, empty__will_return_false_if_there_card_in_the_deck)
{
   // TODO
}

TEST(DeckTest, num_cards__will_return_the_number_of_cards_in_the_deck)
{
   // TODO
}


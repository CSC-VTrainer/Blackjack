#include "gtest/gtest.h"
#include "AbstractPlayer.h"
#include "Card.h"

TEST(player_test, test1) {
    auto player = AbstractPlayer();

    ASSERT_EQ (player.get_state(), PlayerDecisionType::IDLE);
    player.get();
    ASSERT_EQ (player.get_state(), PlayerDecisionType::GET);

}

TEST(card_tests, test1) {
    auto card = Card(CardType::CARD_ACE, CardSuit::DIAMONDS);

    ASSERT_EQ (card.get_card_type(), CardType::CARD_ACE);

    ASSERT_EQ (card.get_card_suit(), CardSuit::DIAMONDS);

}


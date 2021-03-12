#include "Card.h"
#include <vector>

using namespace std;

enum class PlayerDecisionType {
    PASS,
    GET
};

class AbstractPlayer {
public:
    void receive_card(Card card) {
        hand_.push_back(card);
    }

    void get_hand() {
        return hand_;
    }

    void pass() {
        state_ = PlayerDecisionType.PASS;
    }

    void get() {
        state_ = PlayerDecisionType.GET;
    }

private:
    PlayerDecisionType state_;
    vector<Card> hand_;
};
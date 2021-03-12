#pragma once

#include "Card.h"
#include <vector>
#include <iostream>

using namespace std;

enum class PlayerDecisionType {
    PASS = 0,
    GET = 1,
    IDLE = 2
};

class AbstractPlayer {
public:
    AbstractPlayer() {
        state_ = PlayerDecisionType::IDLE;
    }
    void receive_card(Card card) {
        hand_.push_back(card);
    }

    vector<Card> get_hand() {
        return hand_;
    }

    PlayerDecisionType get_state() {
        return state_;
    }

    void print_hand() {
        for (int i = 0; i < hand_.size(); ++i) {
            cout << hand_[i].get_card_suit() << ' ' << hand_[i].get_card_type() << endl;
        }
    }

    void pass() {
        state_ = PlayerDecisionType::PASS;
    }

    void get() {
        state_ = PlayerDecisionType::GET;
    }

private:
    PlayerDecisionType state_;
    vector<Card> hand_;
};

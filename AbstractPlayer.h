#pragma once

#include "Card.h"
#include <vector>
#include <iostream>

using namespace std;

enum class PlayerDecisionType {
    PASS = 0,
    GET = 1
};

class AbstractPlayer {
public:
    void receive_card(Card card) {
        hand_.push_back(card);
    }

    vector<Card> get_hand() {
        return hand_;
    }

    void print_hand() {
        for (int i = 0; i < hand_.size(); ++i) {
            cout << hand_[i].get_card_suit() << ' ' << hand_[i].get_card_type() << endl;
        }
        cout << hand_.size() << endl;
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

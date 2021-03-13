#pragma once

#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include "Card.h"

using namespace std;

class Dealer {
public:
	Dealer() {
        init_deck();
    }

    vector<Card> get_hand() {
	    return hand_;
	}

    void receive_card(Card card) {
        hand_.push_back(card);
    }

    Card give_card() {
        Card res = deck_.back();
        deck_.pop_back();
        return res;
	}

	void print_deck() {
        for (int i = 0; i < deck_.size(); ++i) {
            cout << deck_[i].get_card_suit() << ' ' << deck_[i].get_card_type() << endl;
        }
        cout << deck_.size() << endl;
	}

	void print_secret_hand() {
	    if (hand_.size() == 2) {
            cout << hand_[0].get_card_suit() << ' ' << hand_[0].get_card_type() << endl;
            cout << "*" << endl;
	    }
	}

	void print_full_hand() {
        for (int i = 0; i < hand_.size(); ++i) {
            cout << hand_[i].get_card_suit() << ' ' << hand_[i].get_card_type() << endl;
        }
	}

	void shuffle_deck() {
        random_shuffle(deck_.begin(), deck_.end());
	}

	int get_deck_size() {
	    return deck_.size();
	}

private:
	void init_deck() {
        deck_.push_back(Card(CardType::CARD_TWO, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_THREE, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_FOUR, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_FIVE, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_SIX, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_SEVEN, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_EIGHT, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_NINE, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_TEN, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_VALET, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_QUEEN, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_KING, CardSuit::DIAMONDS));
        deck_.push_back(Card(CardType::CARD_ACE, CardSuit::DIAMONDS));

        deck_.push_back(Card(CardType::CARD_TWO, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_THREE, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_FOUR, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_FIVE, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_SIX, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_SEVEN, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_EIGHT, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_NINE, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_TEN, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_VALET, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_QUEEN, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_KING, CardSuit::HEARTS));
        deck_.push_back(Card(CardType::CARD_ACE, CardSuit::HEARTS));

        deck_.push_back(Card(CardType::CARD_TWO, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_THREE, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_FOUR, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_FIVE, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_SIX, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_SEVEN, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_EIGHT, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_NINE, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_TEN, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_VALET, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_QUEEN, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_KING, CardSuit::CLUBS));
        deck_.push_back(Card(CardType::CARD_ACE, CardSuit::CLUBS));

        deck_.push_back(Card(CardType::CARD_TWO, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_THREE, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_FOUR, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_FIVE, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_SIX, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_SEVEN, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_EIGHT, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_NINE, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_TEN, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_VALET, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_QUEEN, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_KING, CardSuit::SPADES));
        deck_.push_back(Card(CardType::CARD_ACE, CardSuit::SPADES));
    }

    vector<Card> deck_;
	vector<Card> hand_;
};

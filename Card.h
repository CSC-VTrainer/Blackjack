#pragma once

enum class CardType {
	CARD_TWO,
	CARD_THREE,
	CARD_FOUR,
	CARD_FIVE,
	CARD_SIX,
	CARD_SEVEN,
	CARD_EIGHT,
	CARD_NINE,
	CARD_TEN,
	CARD_VALET,
	CARD_QUEEN,
	CARD_KING,
	CARD_ACE
};

enum class CardSuit {
    DIAMONDS,
    HEARTS,
    SPADES,
    CLUBS
};

class Card {
public:
	Card(CardType type, CardSuit suit) {
        type_ = type;
        suit_ = suit;
	}

	CardType get_card_type() {
	    return type_;
	}

	CardSuit get_card_suit() {
        return suit_;
	}

private:
    CardType type_;
    CardSuit suit_;
};

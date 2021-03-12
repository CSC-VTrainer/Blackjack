#pragma once

#include <string>

using namespace std;

enum class CardType {
	CARD_TWO = 0,
	CARD_THREE = 3,
	CARD_FOUR = 4,
	CARD_FIVE = 5,
	CARD_SIX = 6,
	CARD_SEVEN = 7,
	CARD_EIGHT = 8,
	CARD_NINE = 9,
	CARD_TEN = 10,
	CARD_VALET = 11,
	CARD_QUEEN = 12,
	CARD_KING = 13,
	CARD_ACE = 14
};

enum class CardSuit {
    DIAMONDS = 0,
    HEARTS = 1,
    SPADES = 2,
    CLUBS = 3
};

ostream &operator << ( ostream& strm, CardSuit tt )
{
     switch (tt) {
            case CardSuit::DIAMONDS:
                strm << "DIAMONDS";
                break;

            case CardSuit::HEARTS:
                strm << "HEARTS";
                break;

            case CardSuit::SPADES:
                strm << "SPADES";
                break;

            case CardSuit::CLUBS:
                strm << "CLUBS";
                break;
     }

    return strm;
}

ostream &operator << ( ostream& strm, CardType tt )
{
    switch(tt)
    {
        case CardType::CARD_TWO:
            strm << "CARD_TWO";
            break;

        case CardType::CARD_THREE:
            strm << "CARD_THREE";
            break;

        case CardType::CARD_FOUR:
            strm << "CARD_FOUR";
            break;

        case CardType::CARD_FIVE:
            strm << "CARD_FIVE";
            break;

        case CardType::CARD_SIX:
            strm << "CARD_SIX";
            break;

        case CardType::CARD_SEVEN:
            strm << "CARD_SEVEN";
            break;

        case CardType::CARD_EIGHT:
            strm << "CARD_EIGHT";
            break;

        case CardType::CARD_NINE:
            strm << "CARD_NINE";
            break;

        case CardType::CARD_TEN:
            strm << "CARD_TEN";
            break;

        case CardType::CARD_VALET:
            strm << "CARD_VALET";
            break;

        case CardType::CARD_QUEEN:
            strm << "CARD_QUEEN";
            break;

        case CardType::CARD_KING:
            strm << "CARD_KING";
            break;

        case CardType::CARD_ACE:
            strm << "CARD_ACE";
            break;
    }

    return strm;
}

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

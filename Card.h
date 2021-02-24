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

class Card {
public:
	Card(CardType type):
		type_(type)
	{}

	CardType get_card_type() const {
		return type_;
	}

private:
	CardType type_;
};

#include <iostream>
#include "Dealer.h"
#include "Card.h"
#include "AbstractPlayer.h"

using namespace std;

int main() {
    Dealer a;
    a.shuffle_deck();
    a.shuffle_deck();
    a.shuffle_deck();
    AbstractPlayer p;

    p.receive_card(a.give_card());
    p.receive_card(a.give_card());

    p.print_hand();
    a.print_deck();

	return 0;
}

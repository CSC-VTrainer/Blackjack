#pragma once

#include <vector>
#include <iostream>
#include "AbstractPlayer.h"
#include "Dealer.h"
#include "Card.h"

using namespace std;

class GameManager {
public:
    GameManager() {
        dealer_ = Dealer();
        dealer_.shuffle_deck();
        get_players_count();
        init_players();
        give_cards_to_players();
        show_players_cards();
        give_cards_to_dealer();
        show_one_dealer_card();
        poll_players();
        dealer_update_cards();
        show_dealer_cards();
        get_result();
    }

private:
    void dealer_update_cards() {
        int sum = count_hand(dealer_.get_hand());
        while (sum < 17) {
            dealer_.receive_card(dealer_.give_card());
            sum = count_hand(dealer_.get_hand());
        }
    }

    void get_result() {
        int dealer_sum = count_hand(dealer_.get_hand());

        for (int i = 0; i < players_count_; ++i) {
            int player_sum = count_hand(players_[i].get_hand());

            if (player_sum > 21) {
                cout << "Player " << i + 1 << " is loser" << endl;
                continue;
            }

            if (player_sum == 21) {
                if (players_[i].get_hand().size() == 2) {
                    cout << "player " << i + 1 << " is BLACKJACK" << endl;
                    continue;
                }

                cout << "player " << i + 1 << " got 21" << endl;
                continue;
            }

            if (player_sum > dealer_sum) {
                cout << "Player " << i + 1 << " is winner" << endl;
                continue;
            }

            if (player_sum < dealer_sum) {
                if (dealer_sum > 21) {
                    cout << "Player " << i + 1 << " is winner" << endl;
                    continue;
                }
                cout << "Player " << i + 1 << " is loser" << endl;
                continue;
            }

            cout << "Player " << i + 1 << " is not a loser and not a winner" << endl;
        }
    }

    int count_hand(vector<Card> hand) {
        int sum = 0;
        bool is_ace_already_here = false;
        for (int i = 0; i < hand.size(); ++i) {
            switch(hand[i].get_card_type()) {
                case CardType::CARD_ACE:
                    is_ace_already_here ? sum += 1 : sum += 11;
                    break;
                case CardType::CARD_KING:
                    sum += 10;
                    break;
                case CardType::CARD_QUEEN:
                    sum += 10;
                    break;
                case CardType::CARD_VALET:
                    sum += 10;
                    break;
                case CardType::CARD_TEN:
                    sum += 10;
                    break;
                case CardType::CARD_NINE:
                    sum += 9;
                    break;
                case CardType::CARD_EIGHT:
                    sum += 8;
                    break;
                case CardType::CARD_SEVEN:
                    sum += 7;
                    break;
                case CardType::CARD_SIX:
                    sum += 6;
                    break;
                case CardType::CARD_FIVE:
                    sum += 5;
                    break;
                case CardType::CARD_FOUR:
                    sum += 4;
                    break;
                case CardType::CARD_THREE:
                    sum += 3;
                    break;
                case CardType::CARD_TWO:
                    sum += 2;
                    break;
            }
        }

        return sum;
    }

    void poll_players() {
        for (int i = 0; i < players_count_; ++i) {
            cout << "Player " << i + 1 << " get or pass? (1 or 0)" << endl;
            show_player_cards(players_[i]);
            int answer;
            cin >> answer;
            switch (answer) {
                case 1:
                    cout << "You got one more card!" << endl;
                    give_card_to_player(players_[i]);
                    show_player_cards(players_[i]);
                    break;
                case 0:
                    cout << "You passed" << endl;
                    break;
            }
        }
    }

    void give_card_to_player(AbstractPlayer &player) {
        player.receive_card(dealer_.give_card());
    }

    void get_players_count() {
        cout << "Input players amount" << endl;
        cin >> players_count_;
        cout << "There are " << players_count_ << " players" << endl;
    }

    void init_players() {
        for (int i = 0; i < players_count_; ++i) {
            players_.push_back(AbstractPlayer());
        }
    }

    void give_cards_to_players() {
        for (int i = 0; i < players_count_; ++i) {
            give_card_to_player(players_[i]);
            give_card_to_player(players_[i]);
        }
    }

    void show_players_cards() {
        for (int i = 0; i < players_count_; ++i) {
            cout << i + 1 << " player cards are:" << endl;
            show_player_cards(players_[i]);
        }
    }

    void show_player_cards(AbstractPlayer &player) {
        player.print_hand();
        cout << "sum: " << count_hand(player.get_hand()) << endl;
        cout << endl;
    }

    void show_dealer_cards() {
        cout << "Dealer's cards are:" << endl;
        dealer_.print_full_hand();
        cout << "sum: " << count_hand(dealer_.get_hand()) << endl;
        cout << endl;
    }

    void show_one_dealer_card() {
        cout << "Dealer's cards are:" << endl;
        dealer_.print_secret_hand();
        cout << endl;
    }

    void give_cards_to_dealer() {
        dealer_.receive_card(dealer_.give_card());
        dealer_.receive_card(dealer_.give_card());
    }

    Dealer dealer_;
    vector<AbstractPlayer> players_;
    int players_count_;
};

#pragma once

#include <vector>
#include "AbstractPlayer.h"
#include "Dealer.h"

using namespace std;

class GameManager {
public:
    GameManager() {
        dealer_ = Dealer();
    }

private:
    Dealer dealer_;
    vector<AbstractPlayer> players_;
};
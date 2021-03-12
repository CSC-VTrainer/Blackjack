cmake_minimum_required(VERSION 3.13)
project(blackjack)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp AbstractPlayer.h Card.h Dealer.h GameManager.h)

add_executable(blackjack ${SOURCE_FILES})
# cmake_minimum_required(VERSION 3.13)
# project(blackjack)
# set(CMAKE_CXX_STANDARD 14)

# find_package(GTest REQUIRED)

# set(HEADER_FILES include/AbstractPlayer.h include/Card.h include/Dealer.h include/GameManager.h)

# include_directories(include)

# add_subdirectory(test)


# set(SOURCE_FILES src/main.cpp ${HEADER_FILES})

# add_executable(blackjack ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.10)
project(blackjack)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(include)

add_subdirectory(src)
add_subdirectory(test)

# cmake_minimum_required(VERSION 3.13)
# project(blackjack)
# set(CMAKE_CXX_STANDARD 14)

# find_package(GTest REQUIRED)

# set(HEADER_FILES include/AbstractPlayer.h include/Card.h include/Dealer.h include/GameManager.h)

# include_directories(include)

# add_subdirectory(test)


# set(SOURCE_FILES src/main.cpp ${HEADER_FILES})

# add_executable(blackjack ${SOURCE_FILES})
cmake_minimum_required(VERSION 2.7)
project(blackjack)

macro(use_cxx11)
  if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
    endif ()
  else ()
    set (CMAKE_CXX_STANDARD 11)
  endif ()
endmacro(use_cxx11)

include_directories(src)
include_directories(include)

add_subdirectory(src)
# add_subdirectory(test)

/*
Laura Lundell
Loviisa Hurme
Created: 19 February 2019
Updated:
CS372 Software Development
Battleship game

*/

#include <string>
using std::string

#include <vector>
using std::vector



#include "catch2.hpp"

TEST_CASE("Battleship board is vector of 25 ints for represent 5*5")
{
	REQUIRE(createBoard(5,5) = vector.size()==5)
}

TEST_CASE("Creates ship of size 1, 2, or 3")
{
	REQUIRE(createShip(1) = vector.size() == 1)
	REQUIRE(createShip(2) = vector.size() == 2)
	REQUIRE(createShip(3) = vector.size() == 3)
}

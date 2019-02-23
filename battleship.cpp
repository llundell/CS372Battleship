/*
Laura Lundell
Loviisa Hurme
Created: 19 February 2019
Updated: 19 February 2019
CS372 Software Development
Battleship game

*/
#define CATCH_CONFIG_MAIN

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;


vector<int> createBoard(int row, int col)
{
	int boardDim = row*col;
	vector<int> board(boardDim);
	// for(vector<int>::iterator it = &board.begin(); it != &board.end(); ++it)
	// {
	// 	cout<< " " << *it;
	// }
	// cout<< endl;
	return board;
}



vector<int> placeShip(int shipSize, auto &board){
	
}



// int main()
// {
// 	int dim_x = 5;
// 	int dim_y = 5;
// 	createBoard(dim_x,dim_y);
//
// }



#include "catch2.hpp"


TEST_CASE("Battleship board is vector of 25 ints for represent 5*5")
{
	vector<int> fooFunc;
	fooFunc.push_back(25);
	REQUIRE(createBoard(5,5) == fooFunc);
	// REQUIRE(createBoard(5,5a.) == vector<int> board(25));
}


// TEST_CASE("Creates ship of size 1, 2, or 3")
// {
// 	REQUIRE(createShip(1) = vector.size() == 1)
// 	REQUIRE(createShip(2) = vector.size() == 2)
// 	REQUIRE(createShip(3) = vector.size() == 3)
// }

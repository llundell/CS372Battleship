/*
Laura Lundell
Loviisa Hurme
Created: 19 February 2019
Updated: 23 February 2019
CS372 Software Development
Battleship game

*/


#include "battleship.h"

// vector<int> createBoard(int row, int col)
// {
// 	int boardDim = row*col;d
// 	vector<int> board(boardDim,0);
// 	for(vector<int>::iterator it = board.begin(); it != board.end(); ++it)
// 	{
// 	}
// 	cout<< endl;
//     return board;
// }

int Board::getRow()const
{
    return _row;
}
void Board::setRow(int row)
{
    _row=row;
}
int Board::getCol()const
{
    return _col;
}
void Board::setCol(int col)
{
    _col=col;
}

Board::Board() //Default constructor
{
	int _row = 5;
	int _col = 5;
}

// Board::initializeBoard(int row, int col)
// {
// 	vector<vector<int>> board;
// 	for(int x=0; )
// }

//vector<int> placeShip(int shipSize, auto &board){
//
//}

int main()
{
	int dim_x = 5;
	int dim_y = 5;
	return 0;
	Board player1;
}

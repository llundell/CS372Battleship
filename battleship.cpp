/*
Laura Lundell
Loviisa Hurme
Created: 19 February 2019
Updated: 23 February 2019
CS372 Software Development
Battleship game

*/

#include "battleship.h"


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

void Board::initializeBoard(int row, int col)
{
	vector<vector<int> > board(row, vector<int>(col,0));

	for(int r = 0; r < board.size(); ++r)
	{
		cout<<"\n";
		for(int c = 0; c < board[r].size(); ++c)
		{
			cout << board[r][c];
		}
	}
	cout<<"\n";
}
//
// printBoard()

//vector<int> placeShip(int shipSize, auto &board){
//
//}

int main()
{
	Board player1;
	player1.initializeBoard(5,5);
	return 0;
}

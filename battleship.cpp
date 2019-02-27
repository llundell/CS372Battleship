/*
Laura Lundell
Loviisa Hurme
Created: 19 February 2019
Updated: 23 February 2019
CS372 Software Development
Battleship game

*/

#include "battleship.h"

<<<<<<< HEAD

=======
>>>>>>> cdc31e5a59308541722b89532e06225f347bc68f

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

vector<vector<int> > Board::initializeBoard(int row, int col)
{
	vector<vector<int> > board(row, vector<int>(col,0));
<<<<<<< HEAD
	return board;
}

void Board::printBoard(vector<vector<int> > &board)
{
=======

>>>>>>> cdc31e5a59308541722b89532e06225f347bc68f
	for(int r = 0; r < board.size(); ++r)
	{
		cout<<"\n";
		for(int c = 0; c < board[r].size(); ++c)
		{
			cout << board[r][c];
		}
	}
	cout<<"\n";
<<<<<<< HEAD
}

=======
	return board;
}
//
// printBoard()
>>>>>>> cdc31e5a59308541722b89532e06225f347bc68f

vector<vector<int> > Board::placeShip(int shipSize, vector<vector<int> > &board)
{
	for(int r = 0; r < board.size(); ++r)
	{
		for(int c = 0; c < shipSize+1; ++c)
		{
			board[r][c];
		}
	}
	return board;
}

int main()
{
	Board player1;
<<<<<<< HEAD
	vector<vector<int> > board = player1.initializeBoard(5,5);
	player1.printBoard(board);
	player1.placeShip(1,board);
	player1.printBoard(board);
=======
	player1.initializeBoard(5,5);
>>>>>>> cdc31e5a59308541722b89532e06225f347bc68f
	return 0;
}

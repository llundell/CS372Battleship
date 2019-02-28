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

vector<vector<int> > Board::initializeBoard(int row, int col)
{
	vector<vector<int> > board(row, vector<int>(col,0));
	return board;
}

void Board::printBoard(vector<vector<int> > &board)
{
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


vector<vector<int> > Board::placeShip(int shipSize, vector<vector<int> > &board)
{

	for(int r = 0; r < shipSize; r++){
		board.at(shipSize).at(r) = _occupied;
	}

	return board;
}

int main()
{
	Board player1;
	vector<vector<int> > board = player1.initializeBoard(5,5);
	player1.printBoard(board);
	player1.placeShip(1,board);
	player1.placeShip(2,board);
	player1.placeShip(3,board);
	player1.printBoard(board);
	return 0;
}

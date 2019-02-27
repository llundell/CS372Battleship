/*
battleship.h
Laura Lundell
Loviisa Hurme
Created: 19 February 2019
Updated: 23 February 2019
CS372 Software Development
Battleship game

*/

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

class Board
{
public:
	Board();
	Board(vector<vector<int>> board);
	vector<vector<int> > initializeBoard(int row, int col);
	void printBoard(vector<vector<int> > &board);
	vector<vector<int> > placeShip(int shipSize, vector<vector<int> > &board);
	int getRow()const;
	void setRow(int row);
	int getCol()const;
	void setCol(int col);

private:
	int _row;
	int _col;
	int _shipSize;
	vector<vector<int>> _board;
	const int _empty = 0;
	const int _occupied = 1;
	const int _missed = 2;
	const int _hit = 3;

};

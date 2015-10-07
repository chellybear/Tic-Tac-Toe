/*************************************************************************
 * AUTHOR		: Rachel Jachin											 *
 * STUDENT ID	: 959845												 *
 * ASSIGN #5	: Multi-Dimensional Array								 *
 * CLASS		: CS1B													 *
 * SECTION		: TTh 6:30 - 8:20p										 *
 * DUE DATE		: 3/18/2014												 *
 *************************************************************************/

#include "TicTacHeader.h"

/**************************************************************************
 * GetAndCheckInp
 * This function determines which spot the user wants to play in, and must
 * type in the row and column they would like to occupy. The function will
 * obtain the input and verify that the row and column are within range and
 * the spot is not taken.
 *
 * RETURNS: the players names through the variables playerX and playerO.
 *************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS], char token, string playerX,
					string playerO)
{
		int row; 		// IN - Row chosen by player to occupy
		int col; 		// IN - Column chosen by player to occupy
		bool invalidRow;
		bool invalidCol;
		bool valid; 	// CALC - True if row or column is valid

		valid = false;

		do
		{
				// Prompts player to type in which space they want to enter
				if(token == 'X')
				{
					cout << playerX << ", your turn!"
						 << "\nPlease enter row and column: ";
					cin >> row >> col;
					cin.ignore(1000,'\n');
				}
				else
				{
					cout << playerO << ", your turn!"
					     << "\nPlease enter row and column: ";
					cin >> row >> col;
					cin.ignore(1000,'\n');
				}
				row--;
				col--;

				invalidRow = (row < 0) || (row >= NUM_ROWS);
				invalidCol = (col < 0) || (col >= NUM_COLS);

				if(invalidRow && invalidCol)
				{
					valid = false;
					cout << "\nRow and column are invalid, please try again."
							"\n\n";
				}
				else if(invalidRow)
				{
					valid = false;
					cout << "\nRow is invalid, please try again.\n\n";
				}
				else if(invalidCol)
				{
					valid = false;
					cout << "\nColumn is invalid, please try again.\n\n";
				}
				else if(boardAr[row][col] != ' ')
				{
					valid = false;
					cout << "This spot is taken, please try again.\n\n";
				}
				else if(boardAr[row][col] == ' ')
				{
					valid = true;
					boardAr[row][col] = token;
				}
			}
		while(!valid);
}

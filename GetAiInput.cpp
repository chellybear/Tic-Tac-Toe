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
 * GetAiInput*
 * This function receives as input playerX's choice on the tic-tac-toe
 * board and randomizes a spot for the AI's choice on the tic-tac-toe board
 *
 * RETURNS: nothing
 *  the updated boardAr, the token played, playerX, playerO
 *************************************************************************/

void GetAiInput(char boardAr[][NUM_COLS], char token, string playerX,
				string playerO)
{
		int row; 		// IN - Row chosen by player to occupy
		int col; 		// IN - Column chosen by player to occupy
		bool invalidRow;// CALC - If row input is not valid, will be true
		bool invalidCol;// CALC - If col input is valid, will be true
		bool valid; 	// CALC - True if row or column is valid

		valid = false;	// Initializes valid to false

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
				// If token is 'O' (the AI), will decide space randomly
				else if(token == 'O')
				{
					cout << playerO <<"\'s turn!";

					if( (boardAr[0][0] == ' ') ||  (boardAr[0][1] == ' ')
					||  (boardAr[0][2] == ' ') ||  (boardAr[1][0] == ' ')
					||  (boardAr[1][1] == ' ') ||  (boardAr[1][2] == ' ')
					||  (boardAr[2][0] == ' ') ||  (boardAr[2][1] == ' ')
					||  (boardAr[2][2] == ' '))
					{
						row = (rand() % 3 + 1);
						col = (rand() % 3 + 1);
					}
				}
				// Decrements row and col as the location displayed on the
				// board starts at [1][1] instead of [0][0]
				row--;
				col--;

				invalidRow = (row < 0) || (row >= NUM_ROWS);
				invalidCol = (col < 0) || (col >= NUM_COLS);

				// If it is the user's turn, will output a message
				// according to row and col chosen
				if(token == 'X')
				{
					if(invalidRow && invalidCol)
					{
						valid = false;
						cout << "\nRow and column are invalid, please try"
								" again.\n\n";
					}
					else if(invalidRow)
					{
						valid = false;
						cout << "\nRow is invalid, please try again.\n\n";
					}
					else if(invalidCol)
					{
						valid = false;
						cout << "\nColumn is invalid, please try again."
								"\n\n";
					}
					else if(boardAr[row][col] != ' ')
					{
						valid = false;
						cout << "This spot is taken, please try again."
								"\n\n";
					}
					// If the spot assigned is valid, valid will equal true
					// and token will be assigned to that spot.
					else if(boardAr[row][col] == ' ')
					{
						valid = true;
						boardAr[row][col] = token;
					}
				}

				// Since the AI automatically chooses the spot, will not
				// output a message, and will just check if spot is valid
				else if(token == 'O')
				{
					if(invalidRow && invalidCol)
					{
						valid = false;
					}
					else if(invalidRow)
					{
						valid = false;
					}
					else if(invalidCol)
					{
						valid = false;
					}
					else if(boardAr[row][col] != ' ')
					{
						valid = false;
					}
					else if(boardAr[row][col] == ' ')
					{
						valid = true;
						boardAr[row][col] = token;
					}
				}

			}
		while(!valid);
}

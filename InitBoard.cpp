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
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 *************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]) // OUT - tic tac toe board
{
	int row;
	int col;

	// Initializes board to blank spaces
	for(row = 0; row < NUM_ROWS; row++)
	{
		for(col = 0; col < NUM_COLS; col++)
		{
			boardAr[row][col] = ' ';
		}
	}
}

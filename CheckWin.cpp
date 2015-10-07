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
 * CheckWin
 * This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 *************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]) // IN - tic tac toe board
{
	char win;	// Declares variable for the win condition to be checked
	int index;	// Declares index used to go through the array

		// Checks if there is a winner horizontally
		for(index = 0; index < 3; index++)
		{
			if( (win = boardAr[index][0]) != ' '
			 && (boardAr[index][1] == win)
			 && (boardAr[index][2] == win) )
			{
				win = boardAr[index][0];
				return win;
			}
		}
		// Checks if there is a winner vertically
		for(index = 0; index < 3; index++)
		{
			if( (win = boardAr[0][index]) != ' '
			 &&  (boardAr[1][index] == win)
			 &&  (boardAr[2][index] == win) )
			{
				win = boardAr[0][index];
				return win;
			}
		}

		// Checks if there is a win diagonally
		if(  (win = boardAr[1][1]) != ' '
		  && (boardAr[0][0] == win && boardAr[2][2] == win)
	      || (boardAr[2][0] == win && boardAr[0][2] == win) )
		{
			win = boardAr[1][1];
			return win;
		}
		// Checks if all rows and cols are filled and there is no winner
		if(  (boardAr[0][0] != ' ') &&  (boardAr[0][1] != ' ')
		 &&  (boardAr[0][2] != ' ') &&  (boardAr[1][0] != ' ')
		 &&  (boardAr[1][1] != ' ') &&  (boardAr[1][2] != ' ')
		 &&  (boardAr[2][0] != ' ') &&  (boardAr[2][1] != ' ')
		 &&  (boardAr[2][2] != ' ') &&  (win = ' '))

					{
						win = 'T';
						return win;
					}
}

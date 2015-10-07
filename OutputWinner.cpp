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
 * OutputWinner
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This
 * function does not return anything as it simply outputs the appropriate
 * message to the screen.
 *
 * RETURNS: nothing
 *  Displays the winner’s name
 *************************************************************************/
void OutputWinner(char whoWon, 	   // IN - represents the winner or a value
								   // indicating a tied game.
				  string playerX,  // OUT - player X’s name
				  string playerO) // OUT - player O’x name
{
	// If winner is playerX, playerO, or tied, will output msg accordingly
	if((whoWon == 'X') || (whoWon == 'O') || (whoWon == 'T'))
				{
					if(whoWon == 'X')
					{
						cout << "YAY!! The winner is " << playerX << "!!" << endl;
					}
					else if(whoWon == 'O')
					{
						cout << "YAY!! The winner is " << playerO << "!!" << endl;

					}
					else if(whoWon == 'T')
					{
						cout << "It's a TIE!\n\n";
					}
				}

}

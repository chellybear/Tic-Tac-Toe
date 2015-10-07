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
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 *  Displays the instructions to the user
 *************************************************************************/

void OutputInstruct()

{
	cout << "(\\__/)\n"
		 << "(.  .) Let\'s play Tic-Tac-Toe!\n"
		 << "(\")(\")\n\n";
	cout << "Instructions: Player X and Player O will take turns choosing"
			"\na spot to enter on the board. First person to get three of"
			"\ntheir tokens in a row is the winner. Good luck! :)\n\n";
}

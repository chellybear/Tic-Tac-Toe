/*************************************************************************
 * AUTHOR		: Rachel Jachin											 *
 * STUDENT ID	: 959845												 *
 * ASSIGN #5	: Multi-Dimensional Array								 *
 * CLASS		: CS1B													 *
 * SECTION		: TTh 6:30 - 8:20p										 *
 * DUE DATE		: 3/18/2014												 *
 *************************************************************************/

/**************************************************************************
 * GetNumPlayers
 * This function receives as input the number of players who want to play
 * tic-tac-toe.
 *
 * RETURNS: players
 *  Returns the number of players who want to play
 *************************************************************************/
#include "TicTacHeader.h"

int GetNumPlayers(int players)
{
	// Checks if the number of players input by user is valid, if not
	// will loop through
	do
			{
				cout << "\n1 or 2 players?"
						"\nIf 1 player, input the name of CPU (Player 2)."
						"\nPlease enter the number of players: ";
				cin >> players;
				cin.ignore(1000,'\n');
				if((players != 1) && (players != 2))
				{
					cout << "\nINVALID INPUT! Please enter 1 or 2.\n\n";
				}
			}
			while((players != 1) && (players != 2));
	// Returns either 1 or 2 players
	return players;
}

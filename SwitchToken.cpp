/*************************************************************************
 * AUTHOR		: Rachel Jachin											 *
 * STUDENT ID	: 959845												 *
 * ASSIGN #5	: Multi-Dimensional Array								 *
 * CLASS		: CS1B													 *
 * SECTION		: TTh 6:30 - 8:20p										 *
 * DUE DATE		: 3/18/2014												 *
 *************************************************************************/

/**************************************************************************
 * PlayOneGame
 * This function receives as input the user's decision to play one game or
 * exit the program. (Y/N)
 *
 * RETURNS: message
 *  Returns message, the user's input to play one game or not (y/n)
 *************************************************************************/

#include "TicTacHeader.h"

/**************************************************************************
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an O. If it
 * receives and O it returns an X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 *************************************************************************/
char SwitchToken(char token) // IN - current player’s token ('X' or 'O')
{

	// If token is X, will return O
	if(token == 'X')
	{
		token = 'O';
	}
	// If token is O, will return X
	else if(token == 'O')
	{
		token = 'X';
	}

	return token;
}

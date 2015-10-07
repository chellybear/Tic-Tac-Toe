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
 * GetPlayers
 * This function prompts the user and gets the input for the players’ names
 * playerX will always contain the name of the player that is using the
 * X token.
 * playerO will always contain the name of the player that is using the
 * O token.
 *
 * RETURNS: the players names through the variables playerX and playerO.
 *************************************************************************/
void GetPlayers(string& playerX, // OUT - player X’s name
				string& playerO) // OUT - player O’x name
{
	cout << "\nPlayer one, what is your name?: ";
	getline(cin, playerX);
	cout << "Player two, what is your name?: ";
	getline(cin, playerO);
}

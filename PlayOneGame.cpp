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
 * PlayOneGame
 * This function receives as input the user's decision to play one game or
 * exit the program. (Y/N)
 *
 * RETURNS: message
 *  Returns message, the user's input to play one game or not (y/n)
 *************************************************************************/

char PlayOneGame(char message)
{
	// Checks if user wants to play, if response is invalid (not Y or N)
	//will loop through
	do
		{
			cout << "Want to play?(y/n): ";
			cin >> message;
			cin.ignore(1000,'\n');
			message = toupper(message);
			if((message != 'Y') && (message != 'N'))
			{
				cout << "\nINVALID INPUT! Please enter 'y' or 'n'.\n\n";
			}
		}
		while((message != 'Y') && (message != 'N'));
}

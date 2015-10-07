/*************************************************************************
 * AUTHOR		: Rachel Jachin											 *
 * STUDENT ID	: 959845												 *
 * ASSIGN #5	: Multi-Dimensional Array								 *
 * CLASS		: CS1B													 *
 * SECTION		: TTh 6:30 - 8:20p										 *
 * DUE DATE		: 3/18/2014												 *
 *************************************************************************/

#include "TicTacHeader.h"

int main()
{
	/*********************************************************************
	 * ASSIGNMENT 5 - MULTI-DIMENSIONAL ARRAY - TIC TAC TOE
	 *____________________________________________________________________
	 * This program will allow two users to play the game tic-tac toe.
	 * It will prompt users for a name and assign a token to each player
	 * accordingly. The program will have each player take turns until one
	 * player wins or there is a tie, and will output a message and ask
	 * if they would like to play again.
	 *____________________________________________________________________
	 * INPUT :
	 *   boardAr[row][col]	: The tic tac toe game board
	 *   playerX			: The name of the first player, X
	 *   playerO			: The name of the second player, O
	 * CALC  :
	 *	 token				: The token of the current player, X or O
	 * 	 whoWon				: The winner of the game, X or O or T
	 * OUTPUT:
	 *   boardAr[row][col]	: The tic tac toe game board
	 *   playerX			: The name of the first player, X
	 *   playerO			: The name of the second player, O
	 *********************************************************************/

	// Variables
	char boardAr[NUM_ROWS][NUM_COLS]; // IN & OUT & CALC - the game board
	char message;					  // IN - input by user if they want to
									  //      play again
	char newPlayers;				  // IN - input by user if they want to
	                                  //      change players
	int players;					  // IN - the number of players
	char token;						  // CALC - the token of the current
									  //        player (X or O)
	char whoWon;					  // CALC - the winner of the game
	string playerX; 				  // IN & OUT - player X’s name
	string playerO; 				  // IN & OUT - player O's name


	token = 'X';					  // Initializes token to 'X', player 1
	whoWon = ' ';					  // Initializes winner to ' '
	srand(time(NULL));    			  // Generates random number (for AI
									  // option

	// Outputs the instructions to play the game
	OutputInstruct();
	// Initializes all board spaces to ' '
	InitBoard(boardAr);
	// Asks user if they want to play
	message = PlayOneGame(message);
	// If user wants to play, will get the number of players and names
	if(message == 'Y')
	{
		players = GetNumPlayers(players);
		GetPlayers(playerX, playerO);
	}
	// Loops through while the user inputs 'Y' to play again
	while(message == 'Y')
	{
		// Displays the tic-tac-toe board
		DisplayBoard(boardAr);
		// If there are two players, will allow both to make plays
		if(players == 2)
		{
			GetAndCheckInp(boardAr, token, playerX, playerO);
		}
		// If there is one player, AI will be the second player
		else if(players == 1)
		{
			GetAiInput(boardAr, token, playerX, playerO);
		}
		DisplayBoard(boardAr);
		// Switches token after making a move
		token = SwitchToken(token);
		// Will check if there is a win condition
		whoWon = CheckWin(boardAr);
		// If there is a winner, will output message
		if((whoWon == 'X') || (whoWon == 'O') || (whoWon == 'T'))
		{
			// Outputs the winner of the game
			OutputWinner(whoWon, playerX, playerO);
			// Asks user if they want to play another game
			message = PlayOneGame(message);
			// If user types 'Y', will prompt user to change players
			if(message == 'Y')
				{
					do
					{
						// Asks if user wants to change players
						cout << "Would you like to change players?(y/n): ";
						cin >> newPlayers;
						cin.ignore(1000,'\n');
						newPlayers = toupper(newPlayers);

						if((newPlayers != 'Y') && (newPlayers != 'N'))
						{
							cout << "\nINVALID INPUT! Please enter 'y' or"
									" 'n'.\n\n";
						}
					}
					while((newPlayers != 'Y') && (newPlayers != 'N'));
					// If user wants to input new players, will ask for
					// player names again
					if(newPlayers == 'Y')
					{
						players = GetNumPlayers(players);
						GetPlayers(playerX, playerO);
					}
						InitBoard(boardAr);
				}
		}
	}

	return 0;
}

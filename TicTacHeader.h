/*************************************************************************
 * AUTHOR		: Rachel Jachin											 *
 * STUDENT ID	: 959845												 *
 * ASSIGN #5	: Multi-Dimensional Array								 *
 * CLASS		: CS1B													 *
 * SECTION		: TTh 6:30 - 8:20p										 *
 * DUE DATE		: 3/18/2014												 *
 *************************************************************************/

#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global Constants
const int NUM_ROWS = 3;
const int NUM_COLS = 3;

/**************************************************************************
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 *  Displays the instructions to the user
 *************************************************************************/
void OutputInstruct();

/**************************************************************************
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 *************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]); // OUT - tic tac toe board

/**************************************************************************
 * DisplayBoard
 * This function outputs the tic tac toe board including the tokens
 * played in the proper format (as described below).
 *
 * 		1		2 		3
 *   [1][1] | [1][2] | [1][3]
 * 			| 		 |
 * 1 		| 		 |
 * 			|		 |
 * --------------------------
 * 	 [2][1] | [2][2] | [2][3]
 * 	 		| 		 |
 * 2 		| 		 |
 * 			| 		 |
 * --------------------------
 * 	[3][1]  | [3][2] | [3][3]
 * 			| 		 |
 * 3 		| 		 |
 * 			|		 |
 *
 * RETURNS: nothing
 *  outputs the current state of the board
 *************************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]); // IN - tic tac toe board

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
				string& playerO); // OUT - player O’x name

/**************************************************************************
 * GetAndCheckInp
 * This function receives as input playerX's or playerO's choice on the
 * tic-tac-toe board and checks to see if their input is valid. If valid,
 * will assign the token to the desired space.
 *
 * RETURNS: playerX, playerO, the token played
 *************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS], char token, string playerX,
					string playerO);

/**************************************************************************
 * GetAiInput*
 * This function receives as input playerX's choice on the tic-tac-toe
 * board and randomizes a spot for the AI's choice on the tic-tac-toe board
 *
 * RETURNS: nothing
 *  the updated boardAr, the token played
 *************************************************************************/
void GetAiInput(char boardAr[][NUM_COLS], char token, string playerX,
				string playerO);

/**************************************************************************
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an 0. If it
 * receives and O it returns and X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 *************************************************************************/
char SwitchToken(char token); // IN - current player’s token ('X' or 'O')

/**************************************************************************
 * CheckWin
 * This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 *************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]); // IN - tic tac toe board

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
				  string playerO); // OUT - player O’x name

/**************************************************************************
 * GetNumPlayers
 * This function receives as input the number of players who want to play
 * tic-tac-toe.
 *
 * RETURNS: players
 *  Returns the number of players who want to play
 *************************************************************************/
int GetNumPlayers(int players);

/**************************************************************************
 * PlayOneGame
 * This function receives as input the user's decision to play one game or
 * exit the program. (Y/N)
 *
 * RETURNS: message
 *  Returns message, the user's input to play one game or not (y/n)
 *************************************************************************/
char PlayOneGame(char message);


#endif /* TICTACHEADER_H_ */

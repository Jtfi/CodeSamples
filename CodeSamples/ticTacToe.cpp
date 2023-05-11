//
// File Name: tocTacToe.cpp
// Date: May 10 2023
// By: Justin Fink
// Description: 
//


#include <iostream>
#include <string>
#include <algorithm> 
#include <Windows.h>
#include <cstdlib>

void howToPlay();

using namespace std;

int main()
{

	bool loop = true;
	int loopTimes = 0;
	bool userGoesFirst = true;
	std::string inputString = "";
	std::string ticTacToeArray[9] = { "N","N", "N", "N", "N", "N", "N", "N", "N" };
	int randomNumber = 0;
	
	//Ask who goes first

	/*
	cout << "Would you like to play first? (Yes or No): ";
	std::getline(std::cin, inputString);

	if (inputString.compare("Yes")) 
	{
		userGoesFirst = true;
	}
	else if (inputString.compare("No"))
	{
		userGoesFirst = false;
	}
	else 
	{
		//Tell user they need to input 'Yes' or 'No'
		loop = false;
	}
	*/

	//Main gameplay loop
	while (loop) 
	{
		//Show how to play
		howToPlay();

		//Display Board
		std::cout << "----------ACTUAL BOARD BELOW---------\n";
		std::cout << "_____________\n";
		std::cout << "_ " << ticTacToeArray[0] << "_ " << ticTacToeArray[1] << "_ " << ticTacToeArray[2] << "_\n";
		std::cout << "_____________\n";
		std::cout << "_ " << ticTacToeArray[3] << "_ " << ticTacToeArray[4] << "_ " << ticTacToeArray[5] << "_\n";
		std::cout << "_____________\n";
		std::cout << "_ " << ticTacToeArray[6] << "_ " << ticTacToeArray[7] << "_ " << ticTacToeArray[8] << "_\n";
		std::cout << "_____________\n\n";


		//Go through a turn
		
			bool pickingNumber = true;
			while (pickingNumber) 
			{
				if (pickingNumber != false) 
				{
					//Ask user for number
					std::cout << "What number would you like to pick: ";
					std::getline(std::cin, inputString);

					if ((inputString.compare("1") == 0) && (ticTacToeArray[0].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[0] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("2") ==0 ) && (ticTacToeArray[1].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[1] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("3") == 0) && (ticTacToeArray[2].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[2] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("4") == 0) && (ticTacToeArray[3].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[3] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("5") == 0) && (ticTacToeArray[4].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[4] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("6") == 0) && (ticTacToeArray[5].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[5] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("7") == 0) && (ticTacToeArray[6].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[6] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("8") == 0) && (ticTacToeArray[7].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[7] = "X";
						pickingNumber = false;
					}
					else if ((inputString.compare("9") == 0) && (ticTacToeArray[8].compare("N") == 0))
					{
						//Change to an X
						ticTacToeArray[8] = "X";
						pickingNumber = false;
					}
				}

			}
		

		//Computer Plays
		bool computerLoop = true;
		while (computerLoop) 
		{

			//Make the computer pick a random number
			randomNumber = (rand() % 9) + 1;

			if (randomNumber == 1 && (ticTacToeArray[0].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[0] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 2 && (ticTacToeArray[1].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[1] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 3 && (ticTacToeArray[2].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[2] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 4 && (ticTacToeArray[3].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[3] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 5 && (ticTacToeArray[4].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[4] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 6 && (ticTacToeArray[5].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[5] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 7 && (ticTacToeArray[6].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[6] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 8 && (ticTacToeArray[7].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[7] = "O";
				computerLoop = false;
			}
			else if (randomNumber == 9 && (ticTacToeArray[8].compare("N") == 0))
			{
				//Change to an X
				ticTacToeArray[8] = "O";
				computerLoop = false;
			}


		}


		if (loopTimes == 9) 
		{
			//Exit loop
			loop = false;
		}

		loopTimes++;

		//Clear Screen
		system("clear");

		computerLoop = true;
		
	}


	return 0;
}




void howToPlay() 
{
	std::cout << "_____________\n";
	std::cout << "_ 1 _ 2 _ 3 _\n";
	std::cout << "_____________\n";
	std::cout << "_ 4 _ 5 _ 6 _\n";
	std::cout << "_____________\n";
	std::cout << "_ 7 _ 8 _ 9 _\n";
	std::cout << "_____________\n";
	std::cout << "\n\n";
	



	return;
}
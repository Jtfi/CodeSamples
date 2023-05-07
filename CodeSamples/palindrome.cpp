//
// File Name: palindrome.cpp
// Date: May 07 2023
// By: Justin Fink
// Description: This program will tell the user if they have inputted a word that is a palindrome
//				a palindrome is a word that can be spelt the same backwards and forwards such as "racecar"
//


#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{

	std::string inputString = "";
	std::string reversedString = "";
	std::string exit = "1";

	cout << "Type '1' to exit the program\n\n";

	//Making the program not exit after just one time
	while (inputString.compare(exit) != 0) 
	{

		//Ask user for string and store it
		cout << "Type a string please: ";
		std::getline(std::cin, inputString);

		reversedString = inputString;

		//Reversing algorithm
		reverse(reversedString.begin(), reversedString.end());

		if (inputString.compare(exit) != 0) 
		{
			//Display to user
			if (inputString.compare(reversedString) != 0)
			{
				cout << "The word you inputted reversed is " << reversedString << " which IS NOT a palindrome!\n\n";
			}
			else
			{
				cout << "The word you inputted reversed is " << reversedString << " which IS a palindrome!\n\n";
			}
		}

	}
	return 0;
}

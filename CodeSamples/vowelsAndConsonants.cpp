//
// File Name: vowelsAndConsonants.cpp
// Date: May 06 2023
// By: Justin Fink
// Description: Counts the number of consonants and vowels in a string inputted by the user
//


#include <iostream>
#include <string>

using namespace std;

int main()
{

	std::string inputString = "";
	int vowels = 0;
	int consonants = 0;

	//Ask user for string and store it
	cout << "Type a string please: ";
	cin >> inputString;

	//Counting algorithm
	for (int i = 0; i <= inputString.length(); i++)
	{
		if ((inputString[i] == 'a') || (inputString[i] == 'e') || (inputString[i] == 'i') || (inputString[i] == 'o') || (inputString[i] == 'u'))
		{
			++vowels;
		}
		else 
		{
			//It also includes the terminating character so we need to not allow that
			if (inputString[i] != NULL)
			{
				++consonants;
			}
		}
	}

	//Display to user
	cout << "The number of vowels in " << inputString << " is: " << vowels << "\n";
	cout << "The number of consonants in " << inputString << " is: " << consonants << "\n";

	return 0;
}

//
// File Name: reversingString.cpp
// Date: May 05 2023
// By: Justin Fink
// Description: Just reverses a string that was given by the user in C++
//


#include <iostream>
#include <string>

using namespace std;

int main() 
{

	std::string inputString = "";
	std::string reversedString = "";

	//Ask user for string and store it
	cout << "Type a string please: ";
	cin >> inputString;

	//Reversing algorithm

	for (int i = 0; i <= inputString.length(); i++) 
	{
		reversedString.append(1,inputString[(inputString.length() - i)]);
	}

	//Display to user
	cout << "The word you entered reversed is: " << reversedString;

	return 0;
}

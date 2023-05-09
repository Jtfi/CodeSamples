//
// File Name: addingNumbers.cpp
// Date: May 09 2023
// By: Justin Fink
// Description: This program will use a list/array of n elements and add them up and 
//				show the output of the number.
//


#include <iostream>
#include <string>
#include <cstring>
#include <algorithm> 

#define ARRAY_SIZE 100

using namespace std;

int main()
{
	//Initilize Variables
	size_t position = 0;
	std::string inputString = "";
	std::string delimiter = ",";
	int array[ARRAY_SIZE] = {0};
	int sum = 0;
	int index = 0;
	std::string number = "";


	cout << "Type numbers please (ex: 2,68,1,4,8,100,56 ): ";
	std::getline(std::cin, inputString);
	
	//Find the number of times the delimiter has occurred
	int count = 0;
	for (int i = 0; (i = inputString.find(delimiter, i)) != std::string::npos; i++) 
	{
		count++;
	}

	//Find positions of delimiters and get the numbers from the string and put them into the array
	while ((position = inputString.find(delimiter)) != std::string::npos)
	{
		//Get the single number
		number = inputString.substr(0,position);

		//Now we need to put it in the array
		array[index] = std::stoi(number);
		index++;

		//Erase the last number and delimiter from the string
		inputString.erase(0, position + delimiter.length());
	}

	//Put in last number
	array[index] = std::stoi(inputString);

	//Sum Algorithm
	for (int i = 0; i < (count + 1); i++)
	{
		sum = sum + array[i];
	}

	//Ending statement
	cout << "The total sum of numbers in the array is: " << sum << "\nThere are " << (count + 1) << " elements in the array.";

	return 0;
}

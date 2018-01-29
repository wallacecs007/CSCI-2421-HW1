#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#include "Guess.h"

using namespace std;

//Creating the default constructor class for guess class
Guess::Guess()
{



}

//Creating the customized constructor class for the guess class
Guess::Guess(vector<int> _randomVector, vector<int> _foundVector, int _maxNum)
{

	randomVector = _randomVector;
	foundVector = _foundVector;

}
//I NEED TO ADD A MAX NUMBER INPUT HERE
void Guess::startGuess(vector<int> randomVector, vector<int> foundVector, int maxNum)
{

	//Creating a temporary vector to hold a copy of the random vector for comparison.
	//Also creating a vectory to hold the user's guess.
	vector<int> tempVector;
	vector<int> guessVector;
	int userEnter;

	//Using this boolean to check if the user has guessed the correct number And
	//then break the loop or if the user hits the 3 guesses they recieve.
	bool breaker = true;

	tempVector = randomVector;

	do
	{

		//The for loop used for reading in the users numbers for their guess. Reads
		//them in the pushes them into the vector created to hold the users guesses.
		for (int i = 0; i = tempVector.size(); i++)
		{

			//Creating a while loop with an if statement to check and make sure the user enters a number between 1 and the max.
			//If not it revokes the number and makes them renter it.

			bool correctMax = true;

			//This do while loop makes sure the user inputs a number that is appropriate for the ranges given.
			//Needs to be greater than 0 and less than the max.
			do
			{

				cout << "Enter number greater than zero to guess and less than the max number:" << i + 1 << ": " << endl;
				cin >> userEnter;

				//Heres the if statement to check the users numbers.

				if (userEnter >= 1 && userEnter <= maxNum)
				{

					guessVector.push_back(userEnter);

					correctMax = false;

				}
				else
				{

					cout << "Your number was not within the proper range. Try again!" << endl << endl;

				}

			} while (correctMax);

		}


		//Creating nested for loops to run through the vectors and compare the values
		//To check for alikeness. The method I will be using is as follows:
		//I will grab the first value of the temp vector and check it against each values
		//Of the guess vector individually. If the number is found to be similar I will
		//add the number found to the found array and then I will make both values at the locations
		//in the other two vectors 0. Since the random generated array will always have numbers
		//greater than zero this is an efficient way to check to make sure there are no
		//duplicate false positives.

		int vectorSize = tempVector.size();

		for (int i = 0; i < vectorSize; i++)
		{

			for (int j = 0; j < vectorSize; j++)
			{

				if (tempVector[i] == guessVector[j])
				{

					foundVector.push_back(i);

					tempVector[i] = 0;
					guessVector[j] = 0;

				}
				else {}

			}//End nested for loop

		}//End for loop



	} while (breaker == true);



}

void Guess::createRandomNumber(vector<int> randomVector)
{

	int maxNum, arraySize, tempNum;

	cout << "How many numbers would you like in your vector to guess: " << endl;

	cin >> arraySize;

	cout << "What is the max number you would like in the array: " << endl;

	cin >> maxNum;

	srand( (unsigned int)time(NULL) );

	for (int i = 0; i < arraySize; i++)
	{

		tempNum = rand() % maxNum + 1;

		randomVector.push_back(tempNum);

	}

}

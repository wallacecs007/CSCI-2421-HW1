/*
Chase Wallace
2421 - Data Structures
Homework 1

Worked on: 1/17/2018, 1/18/2018, 1/19/2018, 1/21/2018, 1/22/2108

Project: Design a one-person guessing game that randomly chooses n integers
from 1 to m and asks the user to guess them. The user will then enter the digits
and the program will tell them how many of the numbers are correct.
***There can be more than one of the same number*** Once the user
guesses all of the numbers correctly, the program will inform them
and then ask if they want to play again. If the user selects no the
program will then close.

Status: Not compiled on CSE-Grid

*/
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Guess.h"
#include <vector>

//Identifying the namespace that will be used.
using namespace std;

//Creating the main function as the shell of the program.
int main()
{

	//Printing out welcome message and the basic description of the program
	cout << "Hello, Welcome to Guess-Tionaire!" << endl;
	cout << "In this game you tell me how many numbers there are," << endl;
	cout << "and the maximum number that can be generated." << endl;
	cout << "You will then attempt to guess the numbers and I will" << endl;
	cout << "tell you how many of them are correct." << endl;

	//Create some of the beginning variables used to run the user entry
	//and for the menu navigation
	int menuSelect; // , maxNum, totalNum;
	vector<int> randomNumbs;
	vector<int> found;

	do
	{

		//Printing out the menu and the options to the user.
		cout << "Choose one of the options below:" << endl;
		cout << "1. Play Game" << endl;
		cout << "2. End Game" << endl;

		cin >> menuSelect;

		//Creating the switch statement to test the menu input by the user
		switch (menuSelect)
		{

		case 1:
			//In here I will write the code to call the functions in guess.cpp
			//for use in creating a random vector of numbers, guessing those numbers,
			//and checking to see if those numbers are correct and if so how many of
			//them are correct.

			

			break;
		case 2:
			//This case is simple enough, just return 0 to exit the game
			return 0;
			break;
		default:
			//The default case is here to make sure a user enters a correct option
			//And if not spits it out at them telling them to try again.
			cout << "You didn't enter a proper response. Please try again." << endl;
			break;

		}

	} while (true);

}//End main function

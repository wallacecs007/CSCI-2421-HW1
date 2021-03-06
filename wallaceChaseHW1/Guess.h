#ifndef GUESS_H
#define GUESS_H
#include <stdlib.h>
#include <vector>

/*

Creating the class of guess which will hold the vectors for the random numbers
generated and also the numbers that have been found within.

Two of the public functions have also been defined

*/

using namespace std;

class Guess
{

private:

	//Wasted a bunch of time by trying to use pointers to vectors instead of just vectors
	//I then realized I was an idiot

	//Creating the vectors for the random generated vector
	//and the vector of numbers found
	vector<int> randomVector;
	vector<int> foundVector;
	int maxNum;

public:

	Guess();
	Guess(vector<int> _randomVector, vector<int> _foundVector, int _maxNum);

	//Functions used to run and manage the game creating the random numbers
	//reading the users guesses, and then comparing the two to check if they
	//are identical in the variables they carry.

	void startGuess(Guess myGuess);
	void createRandomNumber(Guess myGuess);

	//Decided to create the compare inside the startGuess function instead of
	//Seperately
	//void compareVectors();


	//Start constructors for Variables

	vector<int> getRandomVector() { return randomVector; }
	void setRandomVector(vector<int> _randomVector) { randomVector = _randomVector; }
	vector<int> getFoundVector() { return foundVector; }
	void setFoundVector(vector<int> _foundVector) { foundVector = _foundVector; }
	int getMaxNum() { return maxNum; }
	void setMaxNum(int _maxNum) { maxNum = _maxNum; }

	//friend ostream& operator << (ostream& out, Guess _guess);

};

#endif

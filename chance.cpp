/*Chance.cpp*/

/************************************
A simple program to demonstrate
random number, and how to simulate
die rolls or other "random" events.
Author: Samuel Patrick
Date: 9/16/16
*************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

//Generates a random number and returns it
int generate(int x, int y);

int main()
{
	int user, low, high, random;
	low = high = 0;

	//call the random number generator and store the result
	random = generate(low, high);

	cout << "This is random ... " << random << endl;
	cin.get();
	
	return 0;
};

int generate(int x, int y)
{
	int random;

	//generate the random number
	random = rand();

	return random;
};


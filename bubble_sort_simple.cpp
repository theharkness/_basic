/* bubble_sort.cpp*/

/*******************************
A program providing a non OOP
solution to the bubble sort.
Sorts lists stored in arrays
in ascending order.
Author: Samuel Patrick
Date: 9/10/16
********************************/
#include <iostream>
using namespace std;

void main()
{
	//Array Size for user input
	const int SIZE = 5;

	//Counter to count the number of swaps
	int swaps = 0;
	//Marker for the position in the list
	int position = 0;
	//Temporary variable for swaps
	int tempN;
	char tempC;
	//Variable for user input
	char input = 'y';
	//Flag to tell if a list is sorted
	bool sorted = false;
	//Array for user input set to -1
	int user[SIZE] = { -1 };
	//Provided arrays to sort
	int testA[] = { 1, 3, 4, 7, 2, 5 };
	int testB[] = { 1, 2, 3, 4, 5 };
	int testC[] = { 5, 4, 3, 2, 1 };
	int testD[] = { 10, 4, -6, 2, 15, -2 };
	char testE[] = { 'b', 'i', 'n', 'g', 'o' };

	//loop that keeps going over the list until it sorted
	//we cheat because we know in advance the size of the array we are sorting
	while (!sorted)
	{
		position = 0;
		sorted = true;

		//loop through the list from start to end
		//we stop the loop at size-1 since we are comparing n and n+1 elements
		while (position < 5)
		{
			if (testA[position] > testA[position + 1])
			{
				tempN = testA[position];
				testA[position] = testA[position + 1];
				testA[position + 1] = tempN;
				swaps = swaps + 1;
				sorted = false;
			}
			position = position + 1;
		}
	}

	//print the array contents
	position = 0;
	cout << "List A: ";
	//we again cheat since we know the size of the list
	while (position < 6)
	{
		cout << testA[position] << " ";
		position = position + 1;
	}
	//set up for next list
	cout << "\n Number of swaps: " << swaps << endl;
	sorted = false;
	swaps = 0;

	//loop that keeps going over the list until it sorted
	//we cheat because we know in advance the size of the array we are sorting
	while (!sorted)
	{
		position = 0;
		sorted = true;

		//loop through the list from start to end
		//we stop the loop at size-1 since we are comparing n and n+1 elements
		while (position < 4)
		{
			if (testB[position] > testB[position + 1])
			{
				tempN = testB[position];
				testB[position] = testB[position + 1];
				testB[position + 1] = tempN;
				swaps = swaps + 1;
				sorted = false;
			}
			position = position + 1;
		}
	}

	//print the array contents
	position = 0;
	cout << "List B: ";
	//we again cheat since we know the size of the list
	while (position < 5)
	{
		cout << testB[position] << " ";
		position = position + 1;
	}
	//set up for next list
	cout << "\n Number of swaps: " << swaps << endl;
	sorted = false;
	swaps = 0;

	//loop that keeps going over the list until it sorted
	//we cheat because we know in advance the size of the array we are sorting
	while (!sorted)
	{
		position = 0;
		sorted = true;

		//loop through the list from start to end
		//we stop the loop at size-1 since we are comparing n and n+1 elements
		while (position < 4)
		{
			if (testC[position] > testC[position + 1])
			{
				tempN = testC[position];
				testC[position] = testC[position + 1];
				testC[position + 1] = tempN;
				swaps = swaps + 1;
				sorted = false;
			}
			position = position + 1;
		}
	}

	//print the array contents
	position = 0;
	cout << "List C: ";
	//we again cheat since we know the size of the list
	while (position < 5)
	{
		cout << testC[position] << " ";
		position = position + 1;
	}
	//set up for next list
	cout << "\n Number of swaps: " << swaps << endl;
	sorted = false;
	swaps = 0;

	//loop that keeps going over the list until it sorted
	//we cheat because we know in advance the size of the array we are sorting
	while (!sorted)
	{
		position = 0;
		sorted = true;

		//loop through the list from start to end
		//we stop the loop at size-1 since we are comparing n and n+1 elements
		while (position < 5)
		{
			if (testD[position] > testD[position + 1])
			{
				tempN = testD[position];
				testD[position] = testD[position + 1];
				testD[position + 1] = tempN;
				swaps = swaps + 1;
				sorted = false;
			}
			position = position + 1;
		}
	}

	//print the array contents
	position = 0;
	cout << "List D: ";
	//we again cheat since we know the size of the list
	while (position < 6)
	{
		cout << testD[position] << " ";
		position = position + 1;
	}
	//set up for next list
	cout << "\n Number of swaps: " << swaps << endl;
	sorted = false;
	swaps = 0;

	//loop that keeps going over the list until it sorted
	//we cheat because we know in advance the size of the array we are sorting
	while (!sorted)
	{
		position = 0;
		sorted = true;

		//loop through the list from start to end
		//we stop the loop at size-1 since we are comparing n and n+1 elements
		while (position < 4)
		{
			if (testE[position] > testE[position + 1])
			{
				tempC = testE[position];
				testE[position] = testE[position + 1];
				testE[position + 1] = tempC;
				swaps = swaps + 1;
				sorted = false;
			}
			position = position + 1;
		}
	}

	//print the array contents
	position = 0;
	cout << "List E: ";
	//we again cheat since we know the size of the list
	while (position < 5)
	{
		cout << testE[position] << " ";
		position = position + 1;
	}
	//set up for next list
	cout << "\n Number of swaps: " << swaps << endl;
	sorted = false;
	swaps = 0;


	//A loop to get a list from the user and sort it
	while (input == 'Y' || input == 'y')
	{
		//Get the list from the user
		cout << "\nPlease input the first number: ";
		cin >> user[0];
		cout << "Please input the second number: ";
		cin >> user[1];
		cout << "Please input the third number: ";
		cin >> user[2];
		cout << "Please input the fourth number: ";
		cin >> user[3];
		cout << "Please input the fifth number: ";
		cin >> user[4];

		//loop that keeps going over the list until it sorted
		//we cheat because we know in advance the size of the array we are sorting
		while (!sorted)
		{
			position = 0;
			sorted = true;

			//loop through the list from start to end
			//we stop the loop at size-1 since we are comparing n and n+1 elements
			while (position < SIZE - 2)
			{
				if (user[position] > user[position + 1])
				{
					tempN = user[position];
					user[position] = user[position + 1];
					user[position + 1] = tempN;
					swaps = swaps + 1;
					sorted = false;
				}
				position = position + 1;
			}
		}

		//print the array contents
		position = 0;
		cout << "Sorted User List: ";
		//we again cheat since we know the size of the list
		while (position < SIZE - 1)
		{
			cout << user[position] << " ";
			position = position + 1;
		}
		//set up for next list
		cout << "\n Number of swaps: " << swaps << endl;
		sorted = false;
		swaps = 0;

		//Check if the user wants to enter another list
		cout << "Enter another list? (Y/N): ";
		cin >> input;
	}

};

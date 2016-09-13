//
//  main.cpp
//  bubblesort
//
//  Created by Administrator on 9/9/16.
//  Copyright © 2016 Administrator. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
	//declaring variable i for printing list
	//declaring arrays
	int i;
	int list1[6] = { 3, 1, 4, 7, 5, 2 };
	int list2[5] = { 1, 2, 3, 4, 5 };
	int list3[5] = { 5, 4, 3, 2, 1 };
	int list4[6] = { 10, 4, -6, 2, 15, -2 };
	char list5[5] = { 'b', 'i', 'n', 'g', 'o' };
	int inputList[5];
	char answer = 'N';

	//bubblesort list1
	do {

		if (list1[0] > list1[1])
		{
			swap(list1[0], list1[1]);
		}

		if (list1[1] > list1[2])
		{
			swap(list1[1], list1[2]);
		}

		if (list1[2] > list1[3])
		{
			swap(list1[2], list1[3]);
		}

		if (list1[3] > list1[4])
		{
			swap(list1[4], list1[3]);
		}

		if (list1[4] > list1[5])
		{
			swap(list1[4], list1[5]);
		}
	} while (list1[0] > list1[1] || list1[1] > list1[2] || list1[2] > list1[3] ||
		list1[3] > list1[4] || list1[4] >list1[5]);

	//bubblesort list2
	do
	{
		if (list2[0] > list2[1])
		{
			swap(list2[0], list2[1]);
		}

		if (list2[1] > list2[2])
		{
			swap(list2[1], list2[2]);
		}

		if (list2[2] > list2[3])
		{
			swap(list2[2], list2[3]);
		}

		if (list2[3] > list2[4])
		{
			swap(list2[4], list2[3]);
		}

	} while (list2[0] > list2[1] || list2[1] > list2[2] || list2[2] > list2[3] ||
		list2[3] > list2[4]);

	//bubblesort list3
	do{
		if (list3[0] > list3[1])
		{
			swap(list3[0], list3[1]);
		}

		if (list3[1] > list3[2])
		{
			swap(list3[1], list3[2]);
		}

		if (list3[2] > list3[3])
		{
			swap(list3[2], list3[3]);
		}

		if (list3[3] > list3[4])
		{
			swap(list3[4], list3[3]);
		}

	} while (list3[0] > list3[1] || list3[1] > list3[2] || list3[2] > list3[3] ||
		list3[3] > list3[4]);

	//bubblesort list4
	do {

		if (list4[0] > list4[1])
		{
			swap(list4[0], list4[1]);
		}

		if (list4[1] > list4[2])
		{
			swap(list4[1], list4[2]);
		}

		if (list4[2] > list4[3])
		{
			swap(list4[2], list4[3]);
		}

		if (list4[3] > list4[4])
		{
			swap(list4[4], list4[3]);
		}

		if (list4[4] > list4[5])
		{
			swap(list4[4], list4[5]);
		}
	} while (list4[0] > list4[1] || list4[1] > list4[2] || list4[2] > list4[3] ||
		list4[3] > list4[4] || list4[4] >list4[5]);

	//bubblesort list4
	do{
		if (list5[0] > list5[1])
		{
			swap(list5[0], list5[1]);
		}

		if (list5[1] > list5[2])
		{
			swap(list5[1], list5[2]);
		}

		if (list5[2] > list5[3])
		{
			swap(list5[2], list5[3]);
		}

		if (list5[3] > list5[4])
		{
			swap(list5[4], list5[3]);
		}

	} while (list5[0] > list5[1] || list5[1] > list5[2] || list5[2] > list5[3] ||
		list5[3] > list5[4]);

	//print list1
	cout << "list 1:";
	for (i = 0; i < 6; i++)
	{

		cout << list1[i] << ".";

	}
	cout << endl;

	//print list2
	cout << "list 2:";
	for (i = 0; i < 5; i++)
	{

		cout << list2[i] << ".";

	}
	cout << endl;

	//print list3
	cout << "list 3:";
	for (i = 0; i < 5; i++)
	{
		cout << list3[i] << ".";
	}
	cout << endl;

	//print list4
	cout << "list 4:";
	for (i = 0; i < 6; i++)
	{
		cout << list4[i] << ".";
	}
	cout << endl;

	//print list5
	cout << "list 5:";
	for (i = 0; i < 5; i++)
	{
		cout << list5[i] << ".";
	}
	cout << endl;

	//input inputList
	do
	{
		cout << "Enter your list to be sorted. (5 numbers)\n";
		cout << "#1:\n";
		cin >> inputList[0];
		cout << "#2:\n";
		cin >> inputList[1];
		cout << "#3:\n";
		cin >> inputList[2];
		cout << "#4:\n";
		cin >> inputList[3];
		cout << "#5:\n";
		cin >> inputList[4];

		//bubblesort inputList

		do
		{
			if (inputList[0] > inputList[1])
			{
				swap(inputList[0], inputList[1]);
			}

			if (inputList[1] > inputList[2])
			{
				swap(inputList[1], inputList[2]);
			}

			if (inputList[2] > inputList[3])
			{
				swap(inputList[2], inputList[3]);
			}

			if (inputList[3] > inputList[4])
			{
				swap(inputList[4], inputList[3]);
			}

		} while (inputList[0] > inputList[1] || inputList[1] > inputList[2] || inputList[2] > inputList[3] ||
			inputList[3] > inputList[4]);


		//inputList
		cout << "input list:";
		for (i = 0; i < 5; i++)
		{
			cout << inputList[i] << ".";
		}

		cout << "enter another list? (Y/N)";
		cin >> answer;
	} while (answer == 'Y');


	return 0;
}

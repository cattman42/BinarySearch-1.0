// BinarySearch (Project 1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Caleb Catt, 4/10/2019, CMSC 270, Java converted to C++ of Binary Search

#include "pch.h"
#include <iostream>
using namespace std;

int binSearch(int list[], int target, int first, int last)
{
	int middle = (first + last) / 2;
	cout << "Entering binSearch: first=" << list[first]
		<< ", last=" << list[last] << ", mid=" << middle << ", list["<<middle<<"]= "<< list[middle] << "\n";
	if (first > last)
		return -1;
	else if (target == list[middle])
		return middle;
	else if (target < list[middle])
		return binSearch(list, target, first, middle - 1);
	else
		return binSearch(list, target, middle + 1, last);
}
int main()
{
	int list[10];
	int length = sizeof(list) / sizeof(list[0]);
	cout << "This list is ";
	for (int i = 0; i < length; i++)
	{
		list[i] = (2 * i + 1);
		cout << list[i] << " ";
	}
	cout << "\n";

	cout << "Enter a key: ";
	int key;
	cin >> key;

	int index = binSearch(list, key, 0, length - 1);
	if (index != -1)
		cout << "The key is found at zero-based index: " << index;
	else
		cout << "The key is not found in the list.";
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

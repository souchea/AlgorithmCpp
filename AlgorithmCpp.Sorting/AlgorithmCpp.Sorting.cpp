// AlgorithmCpp.Sorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int *BucketSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *CountingSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *MergeSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *QuickSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *BubbleSort(int toSortArray[])
{
	int notSorted = true;
	int tmp;

	while (notSorted)
	{
		notSorted = false;
		for (size_t i = 0; i < 10; i++)
		{
			if (toSortArray[i] > toSortArray[i + 1])
			{
				tmp = toSortArray[i];
				toSortArray[i] = toSortArray[i + 1];
				toSortArray[i + 1] = tmp;
				notSorted = true;
			}
		}
	}
	return &toSortArray[0];
}

int *SelectionSort(int toSortArray[])
{
	int exchangeIndex;
	int tmp;

	for (size_t i = 0; i < 11; i++)
	{
		exchangeIndex = i;

		for (size_t j = i; j < 11; j++)
		{
			if (toSortArray[j] < toSortArray[i])
			{
				exchangeIndex = j;
			}
		}
		tmp = toSortArray[i];
		toSortArray[i] = toSortArray[exchangeIndex];
		toSortArray[exchangeIndex] = tmp;

	}

	//for (size_t i = 0; i < 11; i++)
	//{
	//	std::cout << toSortArray[i] << std::endl;
	//}

	return &toSortArray[0];
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::string input;
	int values[11] = { 1, 4, 6, 7, 3, 45, 7653, 20, 5000, 42, 1 };
	int arraySize = 11;

	int *newArray = BubbleSort(values);

	for (size_t i = 0; i < arraySize; i++)
	{
		std::cout << *(newArray + i) << std::endl;
	}

	std::cin >> input;
	return 0;


}


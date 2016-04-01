// AlgorithmCpp.Sorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sorting.h"
#include <string>
#include <iostream>


AlgorithmCpp::Sorting::Sorting()
{
}

AlgorithmCpp::Sorting::~Sorting()
{
}

int *AlgorithmCpp::Sorting::BucketSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *AlgorithmCpp::Sorting::CountingSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *AlgorithmCpp::Sorting::MergeSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *AlgorithmCpp::Sorting::QuickSort(int toSortArray[])
{
	return &toSortArray[0];
}

int *AlgorithmCpp::Sorting::BubbleSort(int toSortArray[])
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

int *AlgorithmCpp::Sorting::SelectionSort(int toSortArray[])
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
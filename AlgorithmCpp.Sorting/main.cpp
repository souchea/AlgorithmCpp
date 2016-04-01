#include "stdafx.h"
#include "Sorting.h"
#include <string>
#include <iostream>

using namespace AlgorithmCpp;

int _tmain(int argc, _TCHAR* argv[])
{
	std::string input;
	int values[11] = { 1, 4, 6, 7, 3, 45, 7653, 20, 5000, 42, 1 };
	int arraySize = 11;

	int *newArray = Sorting::BubbleSort(values);

	for (size_t i = 0; i < arraySize; i++)
	{
		std::cout << *(newArray + i) << std::endl;
	}

	std::cin >> input;
	return 0;


}
#pragma once

#ifndef __SORTING_H__
#define __SORTING_H__

namespace AlgorithmCpp
{
	class Sorting
	{
		public :
			Sorting();
			~Sorting();

			static int *BucketSort(int toSortArray[]);

			static int *CountingSort(int toSortArray[]);

			static int *MergeSort(int toSortArray[]);

			static int *QuickSort(int toSortArray[]);

		    static int *BubbleSort(int toSortArray[]);

			static int *SelectionSort(int toSortArray[]);
	};
}

#endif // !__SORTING_H_


#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include "../test/test.h"

class Quicksort{
	public:
		void Sort (int *A, int start, int end); 
		int Partition (int *A, int start, int end);
};

#endif


#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "../test/test.h"
#include "../HEAPSORT/heapsort.h"
#include <cmath>

class Binarysearch { 

private: 
	Heapsort * sort;
public: 
	 Binarysearch();
	~Binarysearch();
	int Search(int * A, int size, int elt);
	void Bsort (int *A, int size);
	int Bsearch(int *A, int size, int elt);
}; 
#endif
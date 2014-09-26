#ifndef HEAPSORT_H 
#define HEAPSORT_H 

#include "../test/test.h"

class Heapsort { 

public:
void Sort(int * A, int size); 
void BuildHeap (int * A, int size); 
void Heapify (int * A, int current, int max);

};

#endif
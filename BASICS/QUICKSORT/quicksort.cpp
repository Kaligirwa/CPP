
#include "quicksort.h"

void Quicksort::Sort (int * A, int start, int end) { 

	if (start < end) {
 	int pi = Partition (A, start, end); 
	Sort (A, start, pi-1); 
	Sort (A, pi+1, end);
	}
}

int Quicksort::Partition (int *A, int start, int end) { 
	
	int p = start; 
	int store = start;
	int temp; 
	temp = A[p]; 
	A[p] = A[end]; 
	A[end] = temp; 

	//loop to move numbers smaller than A[end] on the "left"
	for (int i = start; i < end; i++) { 
		if (A[i] <= A[end]) { 
			temp = A[i]; 
			A[i] = A[store]; 
			A[store] = temp; 
			store++;
		}
	}
	//put back pivot in its correct location at the crossing of values 
	//smaller and bigger than itself
	temp = A[store];
	A[store] = A[end]; 
	A[end] =temp; 

	//return the location of pivot, which is its correct last position
	//in the array
	return store;
}



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
	test_print(A,start,end);
	int temp; 
	temp = A[p]; 
	A[p] = A[end-1]; 
	A[end-1] = temp; 
	printf ("A[p]: %u, A[store]:%u, A[end]: %u \n", A[p], A[store], A[end-1]);

	//loop to move numbers smaller than A[end] on the "left"
	for (int i = start; i < end; i++) { 
		test_print (A,start,end);
		if (A[i] <= A[end-1]) { 
			temp = A[i]; 
			A[i] = A[store]; 
			A[store] = temp; 
			store++;
		}
	}
	//put back pivot in its correct location at the crossing of values 
	//smaller and bigger than itself
	temp = A[store];
	A[store] = A[end-1]; 
	A[end] =temp; 

	//return the location of pivot, which is its correct last position
	//in the array
	return store;
}


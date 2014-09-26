#include "heapsort.h"

void Heapsort::Sort(int * A, int size) { 

	BuildHeap(A, size);
	int temp;
	for (int i = size-1; i >=0; i--) { 
		temp = A[0];
		A[0] = A[i]; 
		A[i] = temp; 

		//heapify a smaller array starting from beginning 
		Heapify (A, 0, i);
	}
}

//first build a heap without doing any swapping
void Heapsort::BuildHeap(int * A, int size) { 
	for (int i = size-1; i >=0; i--) { 
		Heapify (A, i, size);
	}
}

void Heapsort::Heapify(int * A, int current, int max) { 

	//get children 
	int left  = 2*current + 1; 
	int right = 2*current + 2; 

	//assume largest is the current node for now
	int largest = current; 

	if (left < max && A[left] > A[current]) { 
		largest = left;
	}

	if (right < max && A[right] >  A[largest]) { 
		largest = right;
	}

	if (largest != current) { 
		//swap the values 
		int temp = A[current]; 
		A[current] = A[largest]; 
		A[largest] = temp;

		//make sure that we order the subtree elow the elt we just swapped
		Heapify(A, largest, max);

	}
}

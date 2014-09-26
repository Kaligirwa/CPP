#include "binarysearch.h"

//Constructor and Destructor
Binarysearch::Binarysearch() { 

	Heapsort * sort = new Heapsort ();
}

Binarysearch::~Binarysearch() { 
	delete sort;
}

void Binarysearch::Bsort (int * A, int size) { 

	sort->Sort(A, size);
}
//Public Functions
int Binarysearch::Search (int * A, int size, int elt) { 
	Bsort (A, size);
	int index = Bsearch (A, size, elt);
	return index;

}

int Binarysearch::Bsearch(int *A, int size, int elt) { 

	int low = 0; 
	int high = size-1;
	//assume we don't find element, we will return -1
	int index = -1;
	int middle ;
	while ( low <= high) { 

			middle = (high + low)/2; 
			if (elt == A[middle]) { 
				return middle;
			}
			else if (elt > A[middle]) { 
				low = middle + 1;
			}
			else { 
				high = middle - 1;
			}
			
	}
	return index;
}

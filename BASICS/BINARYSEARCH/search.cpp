
#include <iostream> 
#include <cstdlib> 
#include <cstring>
#include "../test/test.h"
#include "binarysearch.h"

int main (int argc, char * argv[]) { 

	if (argc < 3) { 

		printf ("pass the size of the array and the number to find\n"); 
		exit (EXIT_FAILURE);
	}
	if (argc > 3) { 
		printf ("pass only the size of the array and the number to find \n");
		exit (EXIT_FAILURE);
	}

	int size = atoi (argv[1]); 
	int elt =  atoi (argv[2]);
	//new array with random numbers
	int * A = new int (size);
	for (int i = 0; i < size; i++) { 
		A [i] = rand () % size;
	}
	//display the array for testing
	Binarysearch* search = new Binarysearch (); 
	test_print (A, 0, size-1);
	//define object;
	int found = search->Search (A,size, elt);
	if (found != -1){ 
		printf ("the element was found at A[%u] \n", found);
	}
	else { 
		printf ("the element is not part of the array A \n"); 
	}
	test_print (A, 0, size-1);

}
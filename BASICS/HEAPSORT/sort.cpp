#include <iostream> 
#include <cstdlib> 
#include <cstring>
#include "../test/test.h"
#include "heapsort.h"

int main (int argc, char * argv[]) { 

	if (argc < 2) { 

		printf ("pass the size of the array \n"); 
		exit (EXIT_FAILURE);
	}
	if (argc > 3) { 
		printf ("pass only the size of the array \n");
		exit (EXIT_FAILURE);
	}

	int size = atoi (argv[1]); 
	//new array with random numbers
	int * A = new int (size);
	for (int i = 0; i < size; i++) { 
		A [i] = rand () % size;
	}
	//display the array for testing
	Heapsort* sort = new Heapsort (); 
	test_print (A, 0, size-1);
	//define object;
	sort->Sort (A,size);
	test_print (A, 0, size-1);

}
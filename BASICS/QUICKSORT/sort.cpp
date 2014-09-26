#include <iostream> 
#include <cmath> 
#include <cstdlib>
#include <cstring>
#include "quicksort.h"
#include "../test/test.h"

//void test_print (int * A, int size); 
int main (int argc, char *argv[]) { 

	if (argc !=2) { 
		printf("pass the array size as argument \n"); 
		exit (EXIT_FAILURE);
	}

	int size = atoi (argv[1]); 
	int * A = new int [size];

	for (int i = 0; i < size; i++) {
	 	A[i] = rand()%size;
	 }
	 
	//test initial array
	Quicksort * sort = new Quicksort ();
	test_print (A, 0, size-1);
	//delare an object of class quicksort 
	sort->Sort(A, 0, size-1);
	//test final array
	test_print (A, 0, size-1);

}


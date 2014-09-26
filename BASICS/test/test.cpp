#include "test.h"

//test print prints all the values INCLUSIVE
//be sure to send the size of the array as size-1 
void test_print(int * A, int start, int end) { 
	//print 
	for (int i = 0; i <=end; i++) { 
		//display 
		printf ("%u ", *A++);
	}
	printf ("\n");
}
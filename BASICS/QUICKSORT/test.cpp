#include "test.h"
void test_print(int * A, int start, int end) { 
	//print 
	for (int i = 0; i <=end; i++) { 
		//display 
		printf ("%u ", *A++);
	}
	printf ("\n");
}
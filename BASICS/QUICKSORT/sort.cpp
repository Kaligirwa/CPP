#include <iostream> 
#include <cmath> 
#include <cstdlib>
#include "quicksort.h"
#include "test.h"

//void test_print (int * A, int size); 
int main () { 

	int size = 7; 
	//int * A = new int [size];
	int A [] = {6,5,3,1,4,2,7};
	//populate array
	// for (int i = 0; i < size; i++) {
	// 	A[i] = rand()%10;
	// }
	//test initial array
	Quicksort * sort = new Quicksort ();
	test_print (A, 0, size-1);
	//delare an object of class quicksort 
	sort->Sort(A, 0, size-1);
	//test final array
	test_print (A, 0, size-1);


}


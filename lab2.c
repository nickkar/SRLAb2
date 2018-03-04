#include<stdio.h>
#include<stdlib.h>

//***************************************************
#define N 15
//***************************************************

/* My includes */
#include"sorting.h"
#include"membership_sorted.h"
#include "array_generator.h"

//***************************************************

int main(){

	int arr[N];
	int key=0;
//	int n = sizeof(arr)/sizeof(arr[0]);

	//Generate random array...
	aGen(arr, &key);

	//Quicksort...
	quickSort(arr, 0, N-1);
	printf("SortedArray: ");
	printArray(arr, N);

	printf("key = %d\n", key);
	//Membership Query...
	int res = BinaryMember(arr, key);
	printf("res = %d \n", res);
}

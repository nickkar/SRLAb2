#include"sorting.h"
#include"membership_sorted.h"

#define N 15

int main(){

	int arr[N];
//	int n = sizeof(arr)/sizeof(arr[0]);

	//Quicksort...
	quickSort(arr, 0, N-1);
	printf("SortedArray: ");
	printArray(arr, N);


	//Membership Query...
	int key = 15;
	int res = BinaryMember(arr, key, N);
	printf("res = %d \n", res);
}

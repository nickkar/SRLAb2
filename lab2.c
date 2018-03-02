#include"sorting.h"
#include"membership_sorted.h"


int main(){

	int arr[] = {10, 15, 1, 3, 0, 20, 80,30, 5,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	//Quicksort...
	quickSort(arr, 0, n-1);
	printf("SortedArray: ");
	printArray(arr, n);


	//Membership Query...
	int key = 15;
	int res = BinaryMember(arr, key, n);
	printf("res = %d \n", res);
}

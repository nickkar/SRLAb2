/*
 * membership.h
 *
 *  Created on: Mar 1, 2018
 *      Author: Nikolaos Karavalakis
 */

#ifndef MEMBERSHIP_SORTED_H_
#define MEMBERSHIP_SORTED_H_

int BinaryMember(int arr[], int key, int n){
	int x, l, r;
	l = 1;
	r = n;//sizeof(arr)/sizeof(arr[0]);
	printf("%d", key);
	do
	{
		x = (l+r)/2;
		if (key < arr[x])
			r = x - 1;
		else
			l = x + 1;

		printf("x=%d l=%d r=%d\n", x,l,r);
	}while(!((key==arr[x])|| (l>r)));

	if(key == arr[x])
		return 1;
	else
		return 0;
}



#endif /* SRC_MEMBERSHIP_UNSORTED_H_ */

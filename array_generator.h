/*
 * array_generator.h
 *
 *  Created on: Mar 4, 2018
 *      Author: nicke
 */

#ifndef ARRAY_GENERATOR_H_
#define ARRAY_GENERATOR_H_


#include<time.h>
void aGen(int arr[], int *key){
	int i;

	srand(time(NULL));
	printf("arr = ");
	for(i=0;i<15;i++){
		arr[i]=(rand()%100);
		printf("%d ", arr[i]);
	}

	*key = arr[(rand()%N)];
	printf(",\n key = %d\n", *key);
}
#endif /* ARRAY_GENERATOR_H_ */

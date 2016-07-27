#include<stdio.h>

int main(){

	int counter;
	float reciprocal_sum = 0.0f;

	for(counter = 1; counter <= 100; counter++){
		reciprocal_sum = reciprocal_sum + (1.0 / counter);
	}

	printf("Reciprocal sum upto 100 numbers is %f\n", reciprocal_sum);

	return 0;
}	

#include<stdio.h>

int main(){

	int sum = 0, numbers, counter, data;

	printf("How many numbers to add: ");
	scanf("%d", &numbers);
	
	for(counter = 0; counter < numbers; counter++){

		printf("Enter %d-th number: ", (counter +1));
		scanf("%d", &data);
		
		sum = sum + data;
	}

	printf("The total sum is: %d\n", sum);
	return 0;
}

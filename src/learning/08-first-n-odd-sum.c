#include<stdio.h>

int main(){

	int counter = 1, sum = 0, odd_counter = 0, num ;

	printf("How many odd numbers to add ?\n");
	scanf("%d", &num);

	while(odd_counter < num) {
		if(counter % 2 == 1){
			sum = sum + counter;
			odd_counter = odd_counter + 1;
		}
		counter = counter + 1;
	}

	printf("Sum of first %d odd counter numbers is %d\n", num, sum);
	return 0;
}

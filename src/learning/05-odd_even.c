#include<stdio.h>

int main(){
	int num;
	printf("Enter number:");
	scanf("%d", &num);
	if(num % 2 == 0){
		printf("Number %d is even", num);
	} else {
		printf("Number %d is odd", num);
	}
	printf("\n");
	
	return 0;
}

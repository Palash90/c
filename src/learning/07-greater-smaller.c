#include<stdio.h>

int main(){
	double num1, num2;

	printf("Enter two numbmers:");	
	scanf("%lf %lf", &num1, &num2);

	if(num1 < num2){
		printf("%lf is smaller number and %lf is greater number.", num1, num2);
	} else if(num1 == num2) {
		printf("Both numbers are equal");
	} else {
		printf("%lf is smaller number and %lf is greater number.", num2, num1);
	}
	printf("\n");

	return 0;
}

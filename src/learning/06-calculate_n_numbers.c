#include<stdio.h>

int main(){
	int n, counter;
	double sum = 0.0, num;

	printf("How many numbers to add ?\n");
	scanf("%d", &n);
	printf("Enter numbers one by one and press Enter\n");

	for(counter = 0; counter < n; counter++){
		scanf("%lf", &num);
		sum = sum + num;
	}
	
	printf("Total %d numbers were enterd and the total sum is %lf\n", n, sum);
}


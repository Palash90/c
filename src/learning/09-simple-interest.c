#include<stdio.h>

int main(){
	double principal, rate, interest;
	int duration;

	printf("Enter principal, rate of interest and duration and press enter\n");
	scanf("%lf %lf %d", &principal, &rate, &duration);

	interest = rate * duration * principal / 100;
	printf("Interest: %lf, Total: %lf\n", interest, (principal + interest));

	return 0;
}

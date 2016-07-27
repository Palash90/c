#include<stdio.h>

int main(){

	double basic, hra, da;

	printf("Enter basic salary of the employee: ");
	scanf("%lf", &basic);

	if(basic < 1){
		printf("Please enter valid salary.\n");
		return 0;
	} else if (basic < 4001) {
		hra = basic * 10 / 100;
		da = basic * 50 / 100;
	} else if (basic < 8001) {
		hra = basic * 20 /100;
		da = basic * 60 / 100;
	} else if (basic < 12000) {
		hra = basic * 25 / 100;
		da = basic * 70 / 100;
	} else {
		hra = basic * 30 / 100;
		da = basic * 80 / 100;
	}
	
	printf("Calculated gross salary is %lf\n", (basic + hra + da));

	return 0;
}

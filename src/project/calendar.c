/*
 * Author: Palash Kanti Kundu
 * Since: July 27, 2016
 * Need to modify
 */
#include<stdio.h>
#define D 16
#define C 20
#define m 5
#define k 27

int main(){
	// Zeller's Formula
	int day = (k + (int)((13*m - 1) / 5)+ D + (int)(D / 4)+ (int)(C / 4)- 2 * C) % 7;
	char *day_of_week;
	
	switch(day){
		case 0:
			day_of_week = "Sunday";
			break;
		case 1:
			day_of_week = "Monday";
			break;
		case 2:
			day_of_week = "Tuesday";
			break;
		case 3:
			day_of_week = "Wednessday";
			break;
		case 4:
			day_of_week = "Thursday";
			break;
		case 5:
			day_of_week = "Friday";
			break;
		case 6:
			day_of_week = "Saturday";
			break;
	}

	printf("The day is %s\n", day_of_week);
	return 0;
}

#include <stdio.h>

/*
 * This program takes user input and greets the user by his/her name.
 * Author: Palash Kanti Kundu
 * Since: February 25, 2016
 */
int main(){
	// This is variable declaration
	char name[25];
	printf("Enter your name: ");
	//This line takes input from the user
	fgets(name, 25, stdin);
	//This line prints the greeting message
	printf("Hello %s", name);
	return 0;
}

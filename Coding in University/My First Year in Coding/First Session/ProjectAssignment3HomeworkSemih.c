/*Programmer: Semih Özkaplan
*
* Student Number: 201504013
*
* Name of lab: Lab Homework 1
*
* Program Date: 29.10.2021
*/

/*Assignment 3*/   // Check the leap year

#include <stdio.h>               // Preprocessor Directives

int main(void) {                // Main Function Heading


	int year;       // Variable Declarations


	printf("Enter the year: ");      // Input of the years
	scanf_s("%d", &year);


	if (year % 400 == 0 || year % 100 == 0) printf("%d is a leap year.\n\n", year);    // A leap year can divisible by 400 or 100	// If there is one function in if statement we do not have to use {} symbols.
	
	else if (year % 4 == 0) printf("%d is a leap year.\n\n", year);   // A leap year can divisible by 4

	else {
		printf("%d is not a leap year.\n\n", year);       // If it is not one of them, display this.
	}

	return(0);         // Return Function

}
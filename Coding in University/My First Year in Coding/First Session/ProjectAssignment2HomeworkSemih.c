/*Programmer: Semih Özkaplan
*
* Student Number: 201504013
*
* Name of lab: Lab Homework 1
*
* Program Date: 29.10.2021
*/

/*Assignment 2*/    // Display the grade of student

#include <stdio.h>

int main(void) {


	double marks;                              // Variable Declarations

	printf("Please enter your mark: ");       // Input of the mark
	scanf_s("%lf", &marks);

	if (marks < 50) {                         // If Else Statement
		printf("Your grade is F\n\n");
	}

	else if (50 <= marks && marks < 60) {     // If Else Statement
		printf("Your grade is C\n\n");
	}

	else if (60 <= marks && marks < 70) {     // If Else Statement
		printf("Your grade is B\n\n");
	}

	else if (70 <= marks && marks < 80) {     // If Else Statement
		printf("Your grade is B+\n\n");
	}

	else if (80 <= marks && marks < 90) {     // If Else Statement
		printf("Your grade is A\n\n");
	}

	else {

		if (90 <= marks && marks <= 100) {     // If Else Statement (I wrote if statement in else function because if you enter the number that is greater than 100 there can be wrong in the program.)


			printf("Your grade is A+\n\n");
		}

	}

	return(0);
}
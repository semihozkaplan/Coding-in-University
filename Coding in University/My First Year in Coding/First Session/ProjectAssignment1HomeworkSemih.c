/*Programmer: Semih Özkaplan
*
* Student Number: 201504013
*
* Name of lab: Lab Homework 1
*
* Program Date: 29.10.2021
*/

/* Assignment 1 */   // Display the marks and rollno of student

#include <stdio.h>                            // Preprecessor Directives

int main(void) {                              // Main Function Heading
	

	int rollno;                                       //Variable Declarations
	double math, english, science, history, health;   //Variable Declarations


	printf("Please enter the rollno: ");     // Input of the rollno
	scanf_s("%d", &rollno);

	printf("Enter the mark of Math: ");     // Input of mark of math
	scanf_s("%lf", &math);

	printf("Enter the mark of English: ");     // Input mark of the english
	scanf_s("%lf", &english);

	printf("Enter the mark of Science: ");     // Input  mark of the Science 
	scanf_s("%lf", &science);

	printf("Enter the mark of History: ");     // Input mark of the history
	scanf_s("%lf", &history);

	printf("Enter the mark of Health: ");     // Input mark of the health
	scanf_s("%lf", &health);
	printf("\n");

	double percentage;                                                        // Variable Declarations
	percentage = (math + english + science + history + health) / 5.0;         // Calculate the percentage

	printf("The rollno: %d\nThe mark of Math: %.2f/100\nThe mark of English: %.2f/100\nThe mark of Science: %.2f/100\nThe mark of History: %.2f/100\nThe mark of Health: %.2f/100\n", rollno, math, english, science, history, health, percentage);
	printf("The percentage: %.2f", percentage);           // %f/100 means the student had marks in 100 point
	printf("\n\n");                                       // Display the marks of subject and rollno

	return(0);                                                  // Return Function
}
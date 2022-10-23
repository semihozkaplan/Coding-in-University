/*
* Programmer: Semih ÖZkaplan
* 
* Dates: 03.12.2021
*
* Student Number: 201504013
*
*/



#include <stdio.h>

int main(void) {

	int n;

	printf("Please enter the number of students: ");
	scanf_s("%d", &n);

	int counter;
	int grade;
	int sumg = 0;
	int ave;

	for (counter = 0; counter < n; counter++) {

		printf("Please enter the grade: ");
		scanf_s("%d", &grade);

		sumg = grade + sumg;

	}

	ave = sumg / n;

	printf("The average of %d students is %d", n, ave);



	return (0);
}
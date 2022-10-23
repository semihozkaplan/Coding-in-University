/*
*Programmer: Semih Özkaplan
*
* Program Date: 22.10.2021
* 
* Name of session: Lab Session 4
*/

/*Assignment 1 */

#include <stdio.h>
#include <math.h>

int main(void) {   /*Main Heading Function*/

	int num1, num2, num3;

	printf("Please enter three number: ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	int sum;

	sum = num1 + num2 + num3;

		printf("The sum is %d\n", sum);

		int product;

		product = num1 * num2 * num3;

		printf("The product is %d\n", product);

		int average;

		average = (num1 + num2 + num3) / 3;

		printf("The average is %d\n", average);

		int max;
		
		max = num1; 

		if (num2 > max) 
			max = num2;
		
		
		
		if (num3 > max) 
			max = num3;
		
		
		printf("The largest number is %d\n", max); 
		
		int min;

		min = num1;

		if (num2 < min)
			min = num2;



		if (num3 < min)
			min = num3;


		printf("The smallest number is %d", min);
		
		return(0);

}

	




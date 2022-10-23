/*
* Programmer: Semih Özkaplan
* Date: 19.11.2021
* Student No: 201504013
*/

#include <stdio.h>                                  
#include <math.h>
#define PI 3.14

/*Program to display aritmatic operators using switch case*/
/*Input of the program: numbers, choice*/
/*Arithmetic operator : Sum, Product, Substraction, Division*/
/*Output of the program: Result*/



int main(void) {

	int num1, num2; /*input of the program*/
	

	printf("Enter two numbers: ");
	scanf_s("%d%d", &num1, &num2);

	/*int sel;
	printf("1 for Sum\n2 for Sub\n3 for Multip\n4 for Dev");
	printf("Please enter your choice: ");
	scanf_s("%d", &sel);

	int sum, pro, sub, dev;

	switch (sel) {

	case 1:
		sum = num1 + num2;
		printf("The sum is %d\n", sum);
		break;

	case 2:
		pro = num1 * num2;
		printf("The product is %d\n", pro);
		break;

	case 3:
		sub = num1 - num2;
		printf("The sub is %d\n", sub);
		break;

	case 4:
		dev = num1 / num2;
		printf("The devision is %d\n", dev);
		break;

	default:
		printf("Invalid Number\n");

	}*/


	char sel;
	printf("a for Sum\nb for Sub\nc for Multip\nd for Dev");
	printf("Please enter your choice: ");
	scanf_s(" %c", &sel);

	int sum, pro, sub, dev;

	switch (sel) {

	case 'a':
	case 'A':
		sum = num1 + num2;
		printf("The sum is %d\n", sum);
		break;

	case 'b':
	case 'B':
		pro = num1 * num2;
		printf("The product is %d\n", pro);
		break;

	case 'c':
	case 'C':
		sub = num1 - num2;
		printf("The sub is %d\n", sub);
		break;

	case 'd':
	case 'D':
		dev = num1 / num2;
		printf("The devision is %d\n", dev);
		break;

	default:
		printf("Invalid Char\n");


	}



	return(0);
}
























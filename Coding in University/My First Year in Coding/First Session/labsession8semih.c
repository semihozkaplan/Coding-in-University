//
// Programmer: Semih Özkaplan
// Date: 10.12.2021
// Student No: 201504013
// Lab Session 8
//

/*Program that uses a function square to calculate and print the squares of the integers from 1 to 10*/


#include <stdio.h>

// function prototype

//int square(int y);
//int cube(int a);
//int findOddEven(int b);
//int maximum(int a, int b, int c);

void menu(void);
int average(int a, int b, int c);
int sum(int e, int f, int g);
int max(int n, int m, int l);
int min(int e);
int product(int ff, int hh, int oo);

int main(void) {
	// Find Square of numbers
	/*int x;

	for (x = 1; x <= 10; x++) {

		printf("%d, ", square(x));

	}*/

	// Find cube of odd numbers
	/*int b;


	for (b = 1; b <= 20; b = b + 2) {

		printf("%d ,", cube(b));

	}*/

	// Find odd or even
	/*int c = 10;
	int num;

	num = findOddEven(c);

	if (num == 1)
		printf("%d is even", c);

	else
		printf("%d is odd", c);*/
	
	/*write a maximum function to determine and return the largest of three integers given by the user*/

	/*int num1, num2, num3;

	printf("Enter three integers: ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	int max;
	max = maximum(num1, num2, num3);

	printf("Maximum is the %d", max);*/ //function call

	//Menu
	while (1) {
		int sel;
		int num1, num2, num3;



		printf("Please enter three integer: ");
		scanf_s("%d%d%d", &num1, &num2, &num3);

		menu();

		printf("Please select one of them: ");
		scanf_s("%d", &sel);



		switch (sel) {

		case 1:
			printf("The average is %d", average(num1, num2, num3));
			break;



		case 2:
			printf("The sum is %d", sum(num1, num2, num3));
			break;

		case 3:
			printf("The product is %d", product(num1, num2, num3));
			break;
		case 4:
			printf("The maximum is %d", max(num1, num2, num3));
			break;

		default:
			printf("Invalid Value");
			return(0);
		}
	}
//int square(int y) {
//
//
//	return (y * y);
//}

//int cube(int a) {
//
//	return(a * a * a);
//
//}

//int findOddEven(int b){
//
//
//	if (b % 2 == 0) {
//		return(1);
//	}
//
//	return(0);
//}

//int maximum(int a, int b, int c) {
//
//	int max;
//	max = a;
//
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//
//	return(max);
//
//
//}


	void menu(void) {
	
		printf("1. The Average\n");
		printf("2. The Sum\n");
		printf("3. The Product\n");
		printf("4. Maximum\n");
		printf("5. Minimum\n");
	
	}

int average(int a, int b, int c) {

	int aver = (a + b + c) / 3;


	return(aver);

}

int sum(int e, int f, int g) {
	int sum = e + f + g;

	return(sum);

}

int product(int ff, int hh, int oo) {

	int pro =ff *hh * oo;

	return(pro);
}

int max(int n, int m, int l) {

	int maxx;
	maxx = n;
	
	if (b > maxx)
			maxx = m;
	if (c > maxx)
			maxx = l;
	
		return(maxx);

}


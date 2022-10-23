//
// Programmer: Semih Özkaplan
// Date: 03.12.2021
// Student No: 201504013
// Lab Session 7
//

/*Program to find number of een and odd numbers in the list*/

// Terminal Output
// Please enter number of values: 10
// Enter a value: 9
// Enter a value: 19
// Enter a value: 18
// Enter a value: 92
// Enter a value: 17	
// Enter a value: 1
// Enter a value: 97	
// Enter a value: 75
// Enter a value: 68
// Enter a value: 19

// Even count in the list of 10 numbers is : 3
// Odd count in the list of 10 numbers is : 7


#include <stdio.h>

int main(void) {

	int n; 

	printf("Please enter number of values: ");
	scanf_s("%d", &n);

	int counter;
	int num;
	int ecount = 0;
	int ocount = 0;

	for (counter = 0; counter < n; counter++) {

		printf("Enter a value: ");
		scanf_s("%d", &num);

		if (num % 2 == 0)
			ecount++;
		else
			ocount++;


	}

	printf("Even count in the list of %d numbers is : %d\n",n ,ecount);
	printf("Odd count in the list of %d numbers is : %d\n", n, ocount);


	return(0);
}



//
// Programmer: Semih Özkaplan
// Date: 03.12.2021
// Student No: 201504013
// Lab Session 7
//

#include <stdio.h>

int main(void) {

	int count1, count2;											
	int num;

	for (count1 = 1; count1 <= 5; count1++) {

		printf("%d", count1);

		for (count2 = 5; count2 > count1; count2--) {

			printf("%5d", count1);

		}
	
		printf("\n");

	}


	return(0);
}
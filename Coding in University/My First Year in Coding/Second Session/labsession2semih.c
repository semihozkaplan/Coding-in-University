/*
* Programmer: Semih Özkaplan
* Student Number: 201504013
* Date: 18/02/2022
* Lab Session 2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	////Question 1


	//char string1[30];
	//char string2[30];

	//char* ptr1;
	//char* ptr2;

	//int i = 0;
	//int j = 0;
	//int flag = 0;

	//

	//printf("Enter the string: ");
	//scanf("%s", string1);
	//
	//printf("Enter the string: ");
	//scanf("%s", string2);

	//ptr1 = string1;
	//ptr2 = string2;

	//while (string1[i] != '\0') {

	//	ptr1++;
	//	i++;

	//}

	//while (string2[j] != '\0') {

	//	*ptr1 = *ptr2;
	//	ptr1++;
	//	ptr2++;
	//	j++;

	//}

	//if (string1[i] != '\0' || string2[j] != '\0') flag = 1;

	//if (flag = 1) printf("The same string");
	//else printf("Not same");
	
	//Reverse Question 1
	char string1[30];
	char* ptr1;
	int i = 0;
	
	


	printf("Enter the string: ");
	scanf("%s", string1);

	ptr1 = string1;

	while (string1[i] != '\0') {    //10000 - 10006

		ptr1++;
		i++;

	}
	
	int add = ptr1;

	
	do {
		
		printf("%c", &ptr1);
		ptr--;


	} while (add == ptr1);
	
	return (0);
}
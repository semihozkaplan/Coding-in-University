/*
* Programmer: Semih Özkaplan
* Student Number: 201504013
* Date: 18/02/2022
* Lab Session 2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*char daysinweek[7][10] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
	
	printf("%s\n", daysinweek);
	printf("%s\n", daysinweek[0]);
	printf("%c\n", daysinweek[0][0]);
	printf("%p\n", &daysinweek[0][0]);

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", daysinweek[i]);
	}*/

	char string1[20];
	char string2[20];

	char* ptr1;
	char* ptr2;
	int i = 0;
	int j = 0;

	printf("Enter a string: ");
	scanf("%s", string1);

	printf("Enter a string: ");
	scanf("%s", string2);

	ptr1 = string1;
	ptr2 = string2;

	while (string1[i] != '\0') {

		ptr1++;
		i++;

	}

	while (string2[j] != '\0') {

		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		j++;

	}

	*ptr1 = '\0';

	printf("After combining two strings the result string is %s", string1);

	return (0);
}
/*
* Programmer: Semih Özkaplan
* Student No: 201504013
* Date: 04/03/2022
* Lab Session 4 
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CMP_LEN 20
#define ELEM_LEN 10

int main(void) {

	char compound[CMP_LEN];
	char elem[ELEM_LEN];

	puts("Please enter compund: ");
	gets(compound);

	int first = 0; int next;

	for (next = 1; next < strlen(compound); ++next) {

		if (compound[next] >= 'A' && compound[next] <= 'Z') {

			strncpy(elem, &compound[first], next - first);
			elem[next - first] = '\0';
			first = next;
			puts(elem);


		}

	}


	printf("%s\n", strcpy(elem, &compound[first]));

	return 0;
}
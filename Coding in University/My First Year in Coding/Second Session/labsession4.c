/*
* Programmer: Semih Özkaplan
* Student No: 201504013
* Date: 04/03/2022
* Lab Session 4
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {

	char sdata [15][50];
	char temp[50];
	FILE* students;
	FILE* getstudents;
	char* status;
	

	students = fopen("datas.txt", "r");
	getstudents = fopen("getstudent.txt", "w");
	
	for (int i = 0; i < 15; i++) {

       status = fgets(sdata[i], 50, students);

	}

	for (int i = 0; i < 15; ++i) {
		for (int j = i + 1; j < 15; ++j) {

			
			if (strcmp(sdata[i], sdata[j]) > 0) {
				strcpy(temp, sdata[i]);
				strcpy(sdata[i], sdata[j]);
				strcpy(sdata[j], temp);
			}
		}
	}

	for (int k = 0; k < 15; k++)
	{

		fputs(sdata[k], getstudents);

	}


	return 0;
}
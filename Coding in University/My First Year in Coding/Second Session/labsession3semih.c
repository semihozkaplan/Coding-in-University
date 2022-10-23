/*
* Programmer: Semih Özkaplan
* Student Number: 201504013
* Date: 25/02/2022
* Lab Session3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define n 5

int main(void) {

		/*char username[30] = { "user" };
		char password[30] = { "default" };

		char username1[30];
		char password1[30];

		int i = 0;

		while (i < 3) {
			printf("Please enter username: ");
			scanf("%s", username1);

			printf("Please enter password: ");
			scanf("%s", password1);

			if (strcmp(username1, username) == 0 && strcmp(password1, password) == 0) {

				printf("Login is succesfull");
				return 0;
			}

			else printf("Try again!!\n");
			i++;

		}

	printf("You cannot login anymore!!! You have tried 3 times");*/

	//Question 2

	char str1[20] = "goodday";
	char str2[20] = "noontime";

	char str3[20];
	char str4[20];

	strncpy(str3, str1, 4);
	strncpy(str4, str2, 4);


	printf("%s%s", str3, str4);


	return 0;
}
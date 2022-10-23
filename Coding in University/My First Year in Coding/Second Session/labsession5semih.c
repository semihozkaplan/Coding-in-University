/*
* Programmer: Semih Özkaplan
* Student No: 201504013
* Date: 11/03/2022
* Lab Session 5
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


struct dog {

	char name[10];
	char breed[10];
	int age;
	char color[10];

};

void changeNm(struct my_dog* ptrmy_dog);


int main(void) {

	/*struct person p1, * pptr;

	pptr = &p1;

	printf("Enter your age: ");
	scanf("%d", &p1.age);

	printf("Enter your weight: ");
	scanf("%f", &p1.weight);

	printf("Your age is %d\n", (*pptr).age);
	printf("Your weight is %.2f", (*pptr).weight);*/

	struct dog my_dog = { "Coni", "Fifi", 15, "Red" };
	struct dog *ptr_dog;

	ptr_dog = &my_dog;

	changeNm(&my_dog);

	printf("The name is %s\n", (*ptr_dog).name);
	printf("The breed is %s\n", (*ptr_dog).breed);
	printf("The age is %d\n", (*ptr_dog).age);
	printf("The color is %s\n", (*ptr_dog).color);


	return (0);
}

 void changeNm(struct dog *ptrmy_dog) {

	strcpy((*ptrmy_dog).name, "Coco");
	strcpy((*ptrmy_dog).breed, "Cofo");

	(*ptrmy_dog).age = 5;
	strcpy((*ptrmy_dog).color, "Blue");

}


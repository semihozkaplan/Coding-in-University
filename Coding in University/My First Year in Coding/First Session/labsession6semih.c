//
// Programmer: Semih Özkaplan
// Date: 26.11.2021
// Student No: 201504013
// Lab Session 6
//

/* while statement
* while (condition)
	{
		block body statement
	}

	do while statement
	do
	{
	body statement
	} while (condition);

	quess my number
	write a program that generate a number and asks the user to guess that number.
	if the user's guess is higer than thr number , write too high
	if it is lower tahn the number write too low
*/

#include <stdio.h>

int main(void) {

	/*declare variable*/
		
		
		printf("QUESS MY NUMBER GAME\n\n");      /*Program Name*/

		int quess;								/*Declare Program*/
		
		srand(time(0));
		int mynum = rand() % 100 + 1;
		
		int tries = 0;

		printf("I have a number between 1 and 100. Can you quess it: ");		/*Ask the user the number*/
		scanf_s("%d", &quess);

		if (quess == mynum) {													/*If statement*/
			printf("The number is correct!");
			return (0);
		}

					
		while (quess != mynum) {												/*While Looping*/

			

			if (quess < mynum)													/*If else statement*/
				printf("It is too low \n");

			else if (quess > mynum)
				printf("It is too high \n");
			
			tries++;
			printf("Quesses %d\n\n", tries);
			
			if (tries == 10) {
				printf("GAME OVER!!!");
				return(0);
			}

			printf("I have a number between 1 and 100. Can you quess it: ");		/*Ask Again*/
			scanf_s("%d", &quess);

		}

		printf("It is correct!");													/*Correct Answer*/
	
		


	return (0);																	/*Return Statement*/
}


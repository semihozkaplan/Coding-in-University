/*Programmer: Semih Özkaplan
*
* Program Date: 05.11.2021
* 
* Student Number: 201504013
* 
* Name of Lab Session: Lab Session 4
*/

#include <stdio.h>                  //Preprecessor Directives
#include <math.h>
#define PI 3.14159                  //Define 3.14159 as PI

int main(void) {                    //Main function heading

	double rad, dia, circum, area;  //Variable declarations
	int sel;

	printf("Enter the radius of the circle: ");  //Ask the radius of the circle to user
	scanf_s("%lf", &rad);

	printf("***Selection Menu***\n");            //Design a menu
	 
	printf("1-) Diameter\n");                    //Design a menu
	printf("2-) Circumference\n");
	printf("3-) Area\n");

	printf("Enter your choice: ");               //Ask the selection to user
	scanf_s("%d", &sel);
	
	if (sel < 1 || sel > 3) {                    //If it is an invalid selection display this
		printf("Invalid Entry");

		return(0);
	}
	 
	switch (sel) {                               //Switch statement 

	case 1:
		dia = rad * 2;                           //Switch statement 
		break;

	case 2:                                      //Switch statement 
		circum = 2 * PI * rad;              
		break;

	case 3:                                      //Switch statement 
		area = PI * pow(rad, 2);
		break;
		}

	
	if (sel == 1) {                               //If-else statement 
			printf("The diameter of the circle is %.2f", dia);
		}

		else if (sel == 2) {                      //If-else statement
			printf("The circumference of the circle is %.2f", circum);
		}

		else if (sel == 3) {                        //If-else statement
			printf("The area of the circle is %.2f", area);
		}


	return(0);                                      //Return function
}
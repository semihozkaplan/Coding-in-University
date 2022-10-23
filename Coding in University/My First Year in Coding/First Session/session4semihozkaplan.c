/*
*Programmer: Semih Özkaplan
*
* Program Date: 22.10.2021
*
* Name of session: Lab Session 4
*/

/*Assignment 1 (Lab Selection Structure)*/

/*BodyMessIndex*/
#include <stdio.h>
#include <math.h>

int main(void) {   /*Main Heading Function*/

	double weight, height; /*Variable Declarations*/
	double BMI;

	

	printf("Please enter the weight in kg: ");        /*Enter the Weight*/
	scanf_s("%lf", &weight);

	printf("Please enter the height in m: ");        /*Enter the height*/
	scanf_s("%lf", &height);

    BMI = weight / pow(height, 2);

	printf("BMI for a person of %.2f -kg and %.2f -m is %.2f\n", weight, height, BMI);   /*Display The Values*/

	if (BMI < 18.5) {

		printf("Underweight\n");				/*If Else Statement*/
	}

	 else if (18.5 < BMI < 22.9) {               /*If Else Statement*/
		printf("Normal Range");
	}

	 else if (23.0 < BMI < 24.9) {                /*If Else Statement*/
		printf("Overweight - At Risk\n");

	}

	 else if (25.0 < BMI < 29.9) {                  /*If Else Statement*/
		printf("Overweight - Moderately Obese\n");
	}

	 else  {                          /*If Else Statement*/
			printf("Overweight - Severely Obese\n");
		}
	
	return(0);

}
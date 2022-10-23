/*
* 
* 
* Programmer: Semih Özkaplan
* Dates: 17 / 12 /2021
* Lab Session 9
* Student No: 201504013
*
* 
*/


#include <stdio.h>



double chargeAdd1(double a, double b);
double chargeAdd2(double c, double d);
double chargeAdd3(double e, double f);


int main(void) {

	int cnum1, cnum2, cnum3;
	double hours1, hours2, hours3;
	double charge1 = 1.00;
	double charge2 = 1.00;
	double charge3 = 1.00;
	double i;
	double total;
	double totalh;

	printf("Car Numbers: ");
	scanf_s("%d%d%d", &cnum1, &cnum2, &cnum3);

	printf("Hours of Parking: ");
	scanf_s("%lf%lf%lf", &hours1, &hours2, &hours3);

	if (hours1 > 24) { 
		printf("You cannot stay much than 24 hours\n\n"); 
		hours1 = 0;
	}
	
	if (hours2 > 24) {
		printf("You cannot stay much than 24 hours\n\n");
		hours2 = 0;
	}

	if (hours3 > 24) {
		printf("You cannot stay much than 24 hours\n\n");
		hours3 = 0;
	}

	
	
	total = chargeAdd1(hours1, charge1) + chargeAdd2(hours2, charge2) + chargeAdd3(hours3, charge3);
	totalh = hours1 + hours2 + hours3;

	printf(" Car \tHours\tCharge\n");
	printf("---------------------------\n");
	printf(" %d \t%.2f\t%.2f\n\n", cnum1, hours1, chargeAdd1(hours1, charge1));
	printf(" %d \t%.2f\t%.2f\n\n", cnum2, hours2, chargeAdd1(hours2, charge2));
	printf(" %d \t%.2f\t%.2f\n\n", cnum3, hours3, chargeAdd1(hours3, charge3));
	printf(" TOTAL \t%.1f\t%.2f\n\n", totalh, total);



	return (0);
}

double chargeAdd1(double a, double b) {
	
	double add = 0.75;
	int i;
	b = 1.0;

	


		for (i = 0; i < (a - 3); i++) {



			if (a > 3) {
				b = b + add;

			}

			else
				b = 1.00;

		}


		return(b);
	
}

double chargeAdd2(double c, double d) {

	double add = 0.75;
	int i;
	d = 1.0;

	for (i = 0; i < c - 3; i++) {
		if (c > 3) {
			d = d + add;
			
		}
		else
			d = 1.00;

	
	}
	return(d);
}

	
double chargeAdd3(double e, double f) {

	double add = 0.75;
	int i;
	f = 1.0;
	
	for (i = 0; i < e - 3; i++) {
		if (e > 3) {
			f = f + add;
			
		}
		else
			f = 1.00;
	}
	return(f);

}

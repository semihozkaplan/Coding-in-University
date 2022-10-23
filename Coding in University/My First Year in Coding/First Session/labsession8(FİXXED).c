#include <stdio.h>
#include <math.h>

void menu(void);
double average(int num1, int num2, int num3);
int product(int num4, int num5, int num6);
int sum(int num7, int num8, int num9);
int maximum(int num10, int num11, int num12);
int minimum(int num13, int num14, int num15);


int main(void) {

	while (1) {

		int n1, n2, n3;
		int sel;
		char leave;

		printf("Please enter three integers: ");
		scanf_s("%d%d%d", &n1, &n2, &n3);

		menu();

		printf("Please select one of them: ");
		scanf_s("%d", &sel);

		

		switch (sel) {

		case 1:

			printf("The average is %.2f\n", average(n1, n2, n3));

			printf("Do you wanna leave ? (y/n): ");
			scanf_s(" %c", &leave);

			printf("\n\n");

			if (leave == 'y') {
				return 0;
			}

			break;


		case 2:

			printf("The product is %d\n", product(n1, n2, n3));
			
			printf("Do you wanna leave ? (y/n): ");
			scanf_s(" %c", &leave);

			printf("\n\n");

			if (leave == 'y') {
				return 0;
			}

			break;

		case 3:

			printf("The sum is %d\n", sum(n1, n2, n3));
			
			printf("Do you wanna leave ? (y/n): ");
			scanf_s(" %c", &leave);

			printf("\n\n");

			if (leave == 'y') {
				return 0;
			}
			
			break;

		case 4:

			printf("The maximum number is %d\n", maximum(n1, n2, n3));
			
			printf("Do you wanna leave ? (y/n): ");
			scanf_s(" %c", &leave);

			printf("\n\n");

			if (leave == 'y') {
				return 0;
			}
			
			break;

		case 5:

			printf("The minimum number is %d\n", minimum(n1, n2, n3));
			
			printf("Do you wanna leave ? (y/n): ");
			scanf_s(" %c", &leave);

			printf("\n\n");

			if (leave == 'y') {
				return 0;
			}
			
			break;

		default:
			printf("Invalid Value");

			printf("Do you wanna leave ? (y/n): ");
			scanf_s(" %c", &leave);

			printf("\n\n");

			if (leave == 'y') {
				return 0;
			}

		}


}
		return 0;
	
}

void menu(void) {

	printf("***Operations***\n");
	printf("1.Average\n");
	printf("2.Product\n");
	printf("3.Sum\n");
	printf("4.Maximum\n");
	printf("5.Minimum\n");

}

double average(int num1, int num2, int num3) {

	double ave = (num1 + num2 + num3) / 3;

	return(ave);
}

int product(int num4, int num5, int num6) {

	int pro = num4 * num5 * num6;

	return(pro);

}

int sum(int num7, int num8, int num9) {

	int summ = num7 + num8 + num9;

	return(summ);

}

int maximum(int num10, int num11, int num12) {

	int max = num10;

	if (num11 > max)
		max = num11;
	if (num12 > max)
		max = num12;

	return(max);

}
int minimum(int num13, int num14, int num15) {

	int min = num13;

	if (num14 < min)
		min = num14;
	if (num15 < min)
		min = num15;
	return(min);
}
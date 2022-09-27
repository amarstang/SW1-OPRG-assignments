#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

	printf_s("Type a risistence number # and press enter. Do it 2 times\n");

	//Holds resistor values and the calc "Replacement resistance/Erstatningsmodstand"
	int r1;
	int r2;
	float Req = 1;

	char c;
	char resistorsInParallel = 'y';

	do
	{
		//clears the terminal for tekst
		system("CLS");


		//instructions for user to input, and read input
		printf_s("Input resistor 1: ");
		scanf_s("%d", &r1);

		printf_s("Input resistor 2: ");
		scanf_s("%d", &r2);

		printf("\nAre the resistors in paralel y / n: ");
		scanf_s(" %c", &resistorsInParallel, 1);

		if (resistorsInParallel == 'y') {
			Req = r1 + r2;
		}
		else {
			//calculatuion for special case, with 2 resistors (R1*R2) / (R1+R2)
			Req = (float)(r1 * r2) / (r1 + r2);
		}

		//outputs the compensation resistance value
		printf_s("\ncompensation resistance is %f\n", Req);


		printf("\nWould you like to make an new calculation y / n: ");
		scanf_s(" %c", &c, 1);

	} while (c == 'y');


	return 0;
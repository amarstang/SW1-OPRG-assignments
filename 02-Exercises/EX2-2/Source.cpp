#include <stdio.h>
#include <math.h>

int main(void) {

	//Holds input for an parable's A,B,and C
	float A;
	float B;
	float C;

	//Holds the calc root value
	float x1;
	float x2;
	float x3;

	//Text to user
	printf_s("Takes A, B, and C, from a parable and calc the roots\n\n");
	printf_s("Type in 1 number, press enter. Do it 3 times.\n");

	//Reads user input for numbers
	scanf_s("%f %f %f", &A, &B, &C);

	x3 = B * B - 4 * A * C;


	if (x3 > 0)
	{
		x1 = (-B + sqrt(x3)) / (2 * A);
		x2 = (-B - sqrt(x3)) / (2 * A);

	}
	else if (x3 == 0)
	{
		x1 = -B / (2 * A);
	}
	else
	{
		x1 = -B / (2 * A);
		x2 = sqrt(-x3) / (2 * A);

	}

	printf_s("\n\n A: %f\n B: %f\n C: %f\n D: %f\n", A, B, C, x3);
	if (x3 != 0)
	{
		printf_s("\nRoot 1: %f", x1);
		printf_s("\nRoot 2: %f", x2);
	}
	else
	{
		printf_s("\nRoot 1: %f", x1);
	}
	printf_s("\n");


	return 0;
}
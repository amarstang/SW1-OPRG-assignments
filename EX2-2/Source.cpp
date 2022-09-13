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

	//Calc the roots of an parable with (-B+-sqrt(D))/2*A
	x1 = (-B + (pow(B, 2) - (4 * A * C))) / (2 * A);
	x2 = (-B - (pow(B, 2) - (4 * A * C))) / (2 * A);
	x3 = pow(B, 2) - 4 * A * C;

	//Print the Calc values of the roots to the user
	printf_s("\n\nUsing\n A: %f\n B: %f\n C: %f\n D: %f\n Root1: %f\n Root2: %f", A, B, C, x3, x1, x2);



	return 0;
}
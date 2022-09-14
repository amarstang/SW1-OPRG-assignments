//Written by Niels Jakob
//Software Teknologi 1 semester
//Date 2022/9/14 (yyyy/mm/dd)

#include <stdio.h>
#include <math.h>

int main(void)
{
	//Holds hole numbers inputed from printf_s
	float number;
	float squareRoot;


	//printf_s outputs the string in the terminal
	printf_s("Type in the number you want the sqare root of\nWrite your number here: ");

	//scanf_s takes the input in the terminal sets number1 equal to it
	scanf_s("%f", &number);

	//calculates the SquareRoot of number1
	squareRoot = sqrt(number);


	//outputs the numbers inputed by the user and the resoult of the calculations
	printf("\nSquare root of %f is %f\n\n", number, squareRoot);

	return 0;
}
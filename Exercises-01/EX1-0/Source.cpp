//Written by Niels Jakob
//Software Teknologi 1 semester
//Date 2022/9/13 (yyyy/mm/dd)

#include <stdio.h>
#include <math.h>

int main(void)
{
	//Holds hole numbers inputed from printf_s
	int number1;
	int number2;

	//holds floating-point numbers
	float fraction; //int squareRoot --> float squareRoot;
	float squareRoot; //int squareRoot --> float squareRoot;


	//printf_s outputs the string in the terminal
	printf_s("Write first number: ");


	//scanf_s takes the input in the terminal sets number1 equal to it
	scanf_s("%d", &number1);


	printf_s("Write second number: ");
	scanf_s("%d", &number2);

	//calculates the fraction of number1 and number2
	fraction = (float)number1 / number2; //Typecast to float: number1 / number2 --> (flaot)number1 / number2

	//calculates the SquareRoot of number1
	squareRoot = sqrt(number1);;

	//outputs the numbers inputed bt the user and the resoult of the calculations
	printf("\n%d divided by %d gives %f\n", number1, number2, fraction); // %d --> %f changed as it's an float
	printf("\nSquare root of %d is %f\n\n", number1, squareRoot); // %d --> %f

	return 0;
}
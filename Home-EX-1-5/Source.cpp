//(Diameter, Circumference atidArea of a Circle) Write a program that reads in the radius of
//a circle as an integerand prints the circle’s diameter, circumferenceand area.Use the constant value
//3.14159 for Pi.Do all calculations in output statements.[Note:In this chapter, we’ve discussed only
//integer constants and variables.In Chapter 4 we discuss floating - point numbers, i.e., values that
//have decimal points.]

//Modification
//Makes it accept floats also
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

	float pi = 3.14159f;
	float inputRadius = 0;

	do
	{
		system("CLS");
		printf_s("Input a the radius of an circel: ");
		scanf_s("%f", &inputRadius);
	} while (inputRadius <= 0);

	float diameter = 2 *inputRadius;			//D = 2 * r
	float circumference = 2 * pi * inputRadius;	//C = 2 * pi * r
	float area = pi * pow(inputRadius,2);		//A = Pi * r^2

	printf_s("\nWith the radius of: %f\n\nThe Diameter of the circel is: %f\nThe circumference of the circel is: %f\nThe area of the circel is: %f\n\n",inputRadius,diameter,circumference,area);


	return 0;
}
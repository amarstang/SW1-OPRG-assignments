#include <stdio.h>
#include <math.h>

int main(void){

	float a;
	float b;
	float c;

	printf_s("input a number 2 times\n");
	scanf_s("%f %f", &a, &b);
	
	c = sqrt(pow(a, 2) + pow(b, 2));

	printf_s("\n\nPythagoras A^2 + B^2 = C^2");
	printf_s("\n A: %f\n B: %f\n C: %f\n\n",a,b,c);

}
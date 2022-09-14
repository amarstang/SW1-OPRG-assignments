#include <stdio.h>
#include <math.h>
//#include <list>
//#include <iostream>

int main(void) {

	printf_s("Type a risistence number # and press enter. Do it 2 times\n");

	//Holds resistor values and the calc "Replacement resistance/Erstatningsmodstand"
	float r1;
	float r2;
	float Req;

	//Takes user input for the resistor valsues
	scanf_s("%f %f", &r1, &r2);

	//calculatuion for special case, with 2 resistors (R1*R2) / (R1+R2)
	Req = (r1 * r2) / (r1 + r2);

	//Outputs the replacement resistance to the user
	printf_s("\n%f", Req);

	return 0;
}
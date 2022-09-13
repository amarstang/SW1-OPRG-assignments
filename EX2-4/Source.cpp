#include <stdio.h>
#include <math.h>
//#include <list>
//#include <iostream>

int main(void) {

	printf_s("Type a risistence number # and press enter. Do it 2 times\n");

	//Holds resistor values and the calc "Replacement resistance/Erstatningsmodstand"
	float x1;
	float x2;
	float Req;

	//Takes user input for the resistor valsues
	scanf_s("%f %f", &x1, &x2);

	//calculatuion for special case, with 2 resistors (R1*R2) / (R1+R2)
	Req = (x1 * x2) / (x1 + x2);

	//Assigenment 2.4 make an while loop with the replacement resistance print
	while (true) {
		printf_s("\n%f", Req);
	}

}
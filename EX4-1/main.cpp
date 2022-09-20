#include <stdio.h>
#include "sumBiggerThan100.h"
#include <stdlib.h>


//If forgotten how to set it up
//https://www.youtube.com/watch?v=IMuf781DAQc&list=PL71DAFD8C68FD9013&index=24

int main(void) {
	float n1, n2;
	scanf_s("%f %f", &n1, &n2);

	system("CLS");//Extra

	//Exercise 4.1 - a
	//printf_s("%d", sumBiggerThan100(n1, n2));

	
	//Exercise 4.1 - b
	printf_s("Num 1 + Num 2 > 100  : 1 out\nNum 1 + Num 2 <= 100 : 0 out\n\nNum 1: %f\nNum 2: %f\n\nOut: %d\n\n",n1,n2, sumBiggerThan100(n1, n2));


	return 0;
}
#include "NumberValidator.h"
#include <stdio.h>

int isEven(int number) { //Should return an bool and take in a double 
	if (number % 2 == 0) {
		return 1;
	}
	return 0;
}


int isInteger(double number) {
	if (number - (int)number == 0) {
		return 1;
	}
	return 0;
}


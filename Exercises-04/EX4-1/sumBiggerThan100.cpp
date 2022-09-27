#include "sumBiggerThan100.h"
//#include <stdio.h> //Don't need stdio.h as it's inheritance from "#include "sumBiggerThan100.h" " file if it have it.
//#include <math.h> //same as above


//Exercise 4.1 - a
//int sumBiggerThan100(float n1, float n2) {
//	float out = n1 + n2;
//	return (int)round(out);
//}


//Exercise 4.1 - b
bool sumBiggerThan100(float n1, float n2) {
	if (n1 + n2 <= 100) {
		return false;
	}
	return true;
}
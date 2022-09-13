#include <stdio.h>
#include <math.h>
#include <iostream>
//#include <cmath>

//math.h is the deprecated C header. cmath is the C++ header. The difference is that cmath puts all the names in the std namespace.

using namespace std;

//https://www.softwaretestinghelp.com/cpp-mathematical-functions/

int main(void) {

	//List of som math functions
	//Trigonometric Functions			: cos, sin, tan, acos, asin, atan.
	//Power Functions					: pow, sqrt
	//Rounding and Remainder Functions	: ceil, floor, fmod, trunc, round, remainder
	//Min, Max, Difference and Absolute : fmax, fmin, fdim, fabs, abs
	//Exponentialand Logarithmic		: exp, log, log10 *(log_n)


	float num1;
	float num2;

	float calc1;
	float calc2;

	printf_s("Write a number. Do it 2 times\n");
	scanf_s("%f %f", &num1,&num2);


	calc1 = pow(num1, num2);
	printf_s("\n power of num1 to num2: %f\n num1: %f\n num1: %f\n\n",calc1,num1,num2);



	calc1 = sqrt(num1);
	calc2 = sqrt(num2);
	printf_s(" Square root num1: %f\n Square root num2: %f\n\n", calc1, calc2);

	calc1 = floor(sqrt(num1));
	calc2 = floor(sqrt(num2));
	printf_s(" Square root floored num1: %f\n Square root floored num2: %f\n\n", calc1, calc2);


	calc1 = ceil(sqrt(num1));
	calc2 = ceil(sqrt(num2));
	printf_s(" Square root ceiling num1: %f\n Square root ceiling num2: %f\n\n", calc1, calc2);


	//exampel from the internet with more or less all of the functions
	printf_s("\n\n\n");
	int PI = 3.142;
	cout << "cos(60) = " << cos(60.0 * PI / 180.0) << endl;
	cout << "sin(60) = " << sin(60.0 * PI / 180.0) << endl;
	cout << "tan(45) = " << tan(45.0 * PI / 180.0) << endl;
	cout << "acos(0.5) = " << acos(0.5) * 180.0 / PI << endl;
	cout << "asin(0.5) = " << asin(0.5) * 180.0 / PI << endl;
	cout << "atan(1.0) = " << atan(1.0) * 180.0 / PI << endl;
	cout << "pow 2^3 = " << pow(2, 3) << endl;
	cout << "sqrt(49) = " << sqrt(49) << endl;
	cout << "ceil(3.8) = " << ceil(3.8) << endl;
	cout << "floor(2.3) = " << floor(2.3) << endl;
	cout << "fmod(5.3,2) = " << fmod(5.3, 2) << endl;
	cout << "trunc(5.3,2) = " << trunc(2.3) << endl;
	cout << "round(4.6) = " << round(4.6) << endl;
	cout << "remainder(18.5,4.2) = " << remainder(18.5, 4.2) << endl;
	cout << "fmax(100.0,1.0) = " << fmax(100.0, 1.0) << endl;
	cout << "fmin(100.0,1.0) = " << fmin(100.0, 1.0) << endl;
	cout << "fdim(2.0,1.0) = " << fdim(2.0, 1.0) << endl;
	cout << "fabs(3.1416) = " << fabs(3.1416) << endl;
	cout << "abs(3.1416) = " << abs(3.1416) << endl;
	cout << "log(5) = " << log(5) << endl;
	cout << "exp(5.0) = " << exp(5.0) << endl;
	cout << "log10(5) = " << log10(5) << endl;



}
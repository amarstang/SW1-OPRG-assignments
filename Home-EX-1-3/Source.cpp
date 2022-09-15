



//(Odd or Even) W rite a program that reads in two integersand determinesand prints
//whether each integer, as well as the sum o f the two integers is an odd number.
//[Hint - .Use the remainder operator (%).An odd number is not a multiple of two.
//Any odd number has a remainder of one when divided by 2.]


#include <stdio.h>

int main(void) {

	int num1;
	int num2;
	int sum;

	printf_s("Type in your first number: ");
	scanf_s("%d", &num1);
	printf_s("Type in your first second: ");
	scanf_s("%d", &num2);

	sum = num1 + num2;


	if (num1 % 2 == 0) {
		printf_s("Number: %d is even\n",num1);
	}
	else {
		printf_s("Number: %d is odd\n", num1);
	}


	if (num2 % 2 == 0) {
		printf_s("Number: %d is even\n", num2);
	}
	else {
		printf_s("Number: %d is odd\n", num2);
	}
	
	
	if (sum % 2 == 0) {
		printf_s("the sum of %d and %d is %d and is even\n",num1, num2, sum);
	}
	else {
		printf_s("the sum of %d and %d is %d and is odd\n",num1, num2, sum);
	}


	return 0;
}
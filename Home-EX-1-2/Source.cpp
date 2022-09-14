//Written by Niels Jakob
//Software Teknologi 1 semester
//Date 2022/9/14 (yyyy/mm/dd)


//Write a program that can calculate the average of 3 whole numbers


//Danish
//Skriv et program som kan beregne middelværdien (gennemsnittet) af 3 hele tal.
//I programmet skal man kunne indtaste 3 hele tal.
//Programmet skal så beregne middelværdien af disse tal og udskrive denne på skærmen.

#include<stdio.h>
#include<math.h>

int main(void) {
	int num1;
	int num2;
	int num3;
	float averageValue;

	printf_s("The program will take in 3 whole numbers and give the average\n\n");
	
	printf_s("First whole number: ");
	scanf_s("%d",&num1);

	printf_s("Second whole number: ");
	scanf_s("%d", &num2);

	printf_s("Thrid whole number: ");
	scanf_s("%d", &num3);


	// (X1+X2+...+Xn) / n = average
	averageValue = (float)(num1 + num2 + num3) / 3;

	printf_s("\n\nFirst number: %d\nSecond number: %d\nThrid number: %d\nAverage value: %f",num1,num2,num3,averageValue);

}
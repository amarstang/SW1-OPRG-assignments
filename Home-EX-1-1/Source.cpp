//Write a program that can turn EURO into DKK and write it out


//Danish:
//Skriv et program som kan omregne et bel�b i Euro.
//til det tilsvarende bel�b i Danske kroner.
//I programmet skal man kunne indtaste et bel�b i Euro
//Programmet skal beregne bel�bet i Danske kroner og udskrive dette p� sk�rmen.

#include<stdio.h>
#include<math.h>

int main(void) {
	//Holds the values of 
	float conversionRate = 7.44f;
	float euroInput;
	float DKK_Out;


	printf_s("Type the amount of euro to convert into dkk: ");
	scanf_s("%f", &euroInput);

	DKK_Out = euroInput * conversionRate;
	printf_s("\nImputed euro: %f\nDKK out: %f\nConversion rate: %f\n\n", euroInput, DKK_Out, conversionRate);

}
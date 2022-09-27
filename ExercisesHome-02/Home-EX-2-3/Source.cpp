//Written by Niels Jakob
//Software Teknologi 1 semester
//Date 2022/9/14 (yyyy/mm/dd)


//Danish
//Hvad sker der, hvis du i programmet fra Home exercise 2.2 ovenfor indtaster et negativt tal ? Prøv det!
//Dette er et klassisk eksempel på, at programmet fejler hvis brugeren
//indtaster en ugyldig værdi.Det skal vi selvfølgelig forhindre!!!
//Du skal derfor foretage følgende ændring i programmet : Brugeren
//skal kunne indtaste et helt tal(som før).Hvis tallet ikke er større end
//eller lig med 0 skal der udskrives en fejlmeddelelse(find selv på en passende tekst).
//Ovenstående skal gentages så længe tallet ikke gyldigt(større end eller lig med 0).
//Først når værdien er gyldig skal kvadratroden af tallet udskrives.

#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(void)
{
	//Holds hole numbers inputed from printf_s
	float number;
	float squareRoot;

	bool validInput = false;

	while (validInput == false)
	{
		system("CLS");

		//printf_s outputs the string in the terminal
		printf_s("Type in the number you want the sqare root of\nWrite your number here: ");

		//scanf_s takes the input in the terminal sets number1 equal to it
		scanf_s("%f", &number);


		if (number > 0) {
			//calculates the SquareRoot of number1
			squareRoot = sqrt(number);

			//outputs the numbers inputed by the user and the resoult of the calculations
			printf("\nSquare root of %f is %f\n\n", number, squareRoot);

			validInput = true;
		}
		else
		{
			printf("\nInvalid input.\nInput needs to be: x > 0 \nThe input was: x <= 0\n\n");
		}
	}
	
	return 0;
}
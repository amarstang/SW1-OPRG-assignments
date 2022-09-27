//Written by Niels Jakob
//Software Teknologi 1 semester
//Date 2022/9/14 (yyyy/mm/dd)


//Danish
//Skriv et program som kan bestemme om en person er barn, teenager eller voksen ud fra personens alder.
//I programmet skal man kunne indtaste en alder. Hvis alderen er mindre end 13,
//skal programmet udskrive ”This person is a child”.Hvis alderen er 13 til 19,
//(13 <= age && age <= 19) skal programmet udskrive ”This person is a teenager”.
//Hvis alderen er større end 19 skal programmet udskrive ”This person is an adult”.

//Extra
//Prøv eventuelt om du kan udvide programmet, så det udskriver specielle beskeder på skærmen,
//hvis der indtastes en negativ alder eller hvis der indtastes en alder større end 125.


#include <stdio.h>

int main(void) {
	int age;

	printf_s("Please type you age in and press enter\nAge: ");
	scanf_s("%d", &age);

	if (age < 13) {
		printf_s("This person is a child");
	}
	else if(age >= 13 && age <=19)
	{
		printf_s("This person is a teenager");
	}
	else if (age >= 19 && age <= 125)
	{
		printf_s("This person is a adult");
	}//Strat of Extra
	else if (age > 125)
	{
		printf_s("This person is too old. Bad input");
	}
	else
	{
		printf_s("Negative age...");
	}//end of Extra

	return 0;
}
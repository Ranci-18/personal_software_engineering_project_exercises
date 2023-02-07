#include <stdio.h>
/*
 *main - entry to program
 *
 *
 *program computes celcius to fahrenheit
 *Return: null
 * */
int main(void)
{
	float celcius;
	float farh;

	printf("Enter celcius degrees - 1 decimal place:\n");
	scanf("%f.1", &celcius);
	farh = (celcius * 9.0 / 5.0) + 32;
	printf("Degrees in fahrenheit: %f\n", farh);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

/**
 *main - using sizeof operator to dynamically determine the size of types char,
 int, and float
 *
 *Return: Always 0
 *
 */

int main(void)
{
	int n;

	printf("Size of the type 'char' on my computer: %lu bytes\n," (sizeof(char)));
	printf("Size of the type 'int' on my computer: %lu bytes\n," (sizeof(int)));
	printf("Size of the type 'float' on my computer: %lu bytes\n," (sizeof(float)));
	printf("Size of the type of my variable n on my computer: %lu bytes\n," (sizeof(n)));
	return (0);
}

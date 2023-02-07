#include <stdio.h>
#define n 100
/*
 *main - entry point
 *program takes a list of integers and prints largest and smallest
 *
 *Return: nothing
 * */
int main(void)
{
	int i;
	int size;
	int present_integer;
	int max;
	int min;
	int x[n];

	size = 0;
	printf("Input integers:\n");
	while (scanf("%d", &x[size]) == 1)
	{
		size++;
	}
	max = x[0];
	min = x[0];

	for (i = 1; i < size; i++)
	{
		present_integer = x[i];
		if (present_integer > max)
		{
			max = present_integer;
		}
		if (present_integer < min)
		{
			min = present_integer;
		}
	}
	printf("%d is the largest number in the list\n", max);
	printf("%d is the smallest number in the list\n", min);
	return (0);
}

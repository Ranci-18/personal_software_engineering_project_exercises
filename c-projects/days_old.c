#include <stdio.h>
#define days_in_a_year 365
int main(void)
{
	char name[10];
	int age;
	int age_in_days;

	printf("Input first name:\n");
	scanf("%s", name);
	printf("Hi %s, input your age:\n", name);
	scanf("%d", &age);
	age_in_days = age * days_in_a_year;
	printf("Wow you're %d days old %s!\n", age_in_days, name);
	return (0);
}

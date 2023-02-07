#include <stdio.h>
/**/
int main(void)
{
	int num1;
	int num2;
	int temp = 0;

	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("first number is now %d\n", num1);
	printf("second number is now %d\n", num2);
	return (0);
}

#include <stdio.h>
/**/
int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
		printf("%d is largest\n", num1);
	
	else if (num2 > num1 && num2 > num3)
		printf("%d is largest\n", num2);
	
	else 
		printf("%d is largest\n", num3);
	
	if (num1 == num2 && num1 == num3 && num2 == num3)
		printf("There is no largest number\n");
	
	return (0);
}

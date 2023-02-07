#include <stdio.h>
/*
 *main - entry point
 *
 *code computes area and perimeter of rectangle
 *Return: null
 * */
int main(void)
{
	int length;
	int width;
	int area;
	int perimeter;

	printf("input length:\n");
	scanf("%d", &length);
	printf("input width:\n");
	scanf("%d", &width);
	area = length * width;
	perimeter = 2 * (length + width);
	printf("The area is %d\n", area);
	printf("The perimeter is %d\n", perimeter);
	return (0);

}

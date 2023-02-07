#include <stdio.h>
/**/
int main(void)
{
	char character;

	printf("Enter character: ");
	scanf("%c", &character);
	printf("ASCII value of %c is: %d\n", character, character);
	return (0);
}

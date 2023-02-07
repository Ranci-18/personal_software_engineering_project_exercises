#include <stdio.h>
int main(void)
{
	int c, wc;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++wc;
			printf("%c", c);
	}
}

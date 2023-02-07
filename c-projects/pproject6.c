#include <stdio.h>
int main(void)
{
	int c, prev;

	prev = ' ';
	while ((c = getchar()) != EOF)
		if (c == ' ' && prev == ' ')
			continue;
		putchar(c);
	return (0);
}

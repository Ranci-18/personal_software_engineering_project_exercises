#include <stdio.h>
int main(void)
{
	int c, i;

	for (i = 0; (c = getchar()) != EOF; i++)
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(c);
		}
	return (0);
}

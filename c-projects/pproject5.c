#include <stdio.h>
int main(void)
{
	int i, c;

	i = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == ' ' || c == '\t')
			i++;
			printf("%d\n", i);
	return (0);
}

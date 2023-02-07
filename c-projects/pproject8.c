#include <stdio.h>

#define IN  1 /*inside a word*/
#define OUT 0 /*outside a word*/
int main(void)
{
	int c, nc, nw, nl, state;

	state = OUT;
	while ((c = getchar()) != EOF)
		++nc;
	{
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}

#include <stdio.h>

int main()
{
    int x = 0x02; 

    x = x >> 1;
    printf("Result after right shifting by 1 bit: 0x%x\n", x);
    return (0);
}

#include <stdio.h>

int main(void)
{
    int x = 0x89;
    int y = 0x01;
    int z = x & y;

    printf("AND bitwise is: 0x%x\n", z);
    return (0);
}
#include <stdio.h>

int main()
{
    int x = 0x01;
    int y = 0x01;
    int result = x | y;

    printf("bitwise OR is: 0x%X\n", result);
    return (0);
}
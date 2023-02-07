#include <stdio.h>

int main(void)
{
    int x = 0x01;

    x = x << 1;
    printf("X left shifted is: 0x%x\n", x);
    return (0);
}
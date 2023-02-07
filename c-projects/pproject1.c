#include <stdio.h>
int main(void)
{
int upper, lower, step, celcius, far;

    lower = 0;
    upper = 300;
    step = 0;
    far = lower;
    while (far <= upper)
    {
        celcius = 5 * (far - 32) / 9;
        printf("%d\t%d\n", far, celcius);
        far = far + 20;
    }
    return (0);
}

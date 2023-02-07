#include <stdio.h>

int main() {
   int x = 0x12;
   int y = ~ x;

   printf("The bitwise NOT of x: 0x%X\n", y);

   return 0;
}
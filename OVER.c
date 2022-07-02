#include <stdio.h>

void main() {
    short int a, b;
    printf("a : %d \n", a);
    a = 32767;
    b = a + 1;
    printf("%d %d", a, a + b);
}
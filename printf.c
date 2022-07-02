#include <stdio.h>

void main() {
    int a = 15;
    float b = 123.1234567;
    double c = 1234567.12345678;
    char d = 'p';
    printf("a=%d, %6d, %o, %x\n", a, a, a, a);
    printf("b=%f, %lf, %5.4lf, %e\n", b, b, b, b);
    printf("c=%lf, %f, %8.4lf\n", c, c, c);
    printf("d=%c, %8c\n", d, d);
}
#include "stdio.h"

int main(int argc, char const *argv[])
{
    printf("%d\n", 80==9);
    printf("%d\n", 80!=9);
    printf("input %x\n", 19);
    int c;
    scanf("scan %d", &c);
    int bai = c / 100;
    int shi = c / 10 % 10;
    int ge = c % 10;
    printf("%d%d%d\n", ge, shi, bai);
    int a = 4;
    int b = 2;
    b = a + b;
    a = b - a;
    b = b - a;
    printf("%d %d\n", a, b);
    double m;
    double n;
    scanf("%lf, %lf\n", &m, &n);
    printf("mk\n");
    printf("%f\n", m / n);
    const int i;
    printf("please input: ");
    scanf("%d", &i);
    printf("zhao %d\n", i + 1);
    int j = i + 1;
    printf("%d\n", j);
    return 0;
}
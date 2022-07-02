#include <stdio.h>

void main() {
    puts("hello");
    // int a,  b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("%d %d %d\n", a, b, c);
    char d, e, f;
    scanf("%c%c%c", &d, &e, &f);
    printf("%c %c %c\n", d, e, f);
    printf("%c %c %c", d - 32, e - 32, f - 32);
}
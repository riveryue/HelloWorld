#include <stdio.h>

int main() {
    int pri=0;
    scanf("%d\n", &pri);
    printf("%d %d\n", pri, pri * 10);
    int ss = 10;

    printf("ss: %o\n", ss);
    char c4 = getchar();
    printf("c4: %c\n", c4);
    printf("%d\n", 0101) ;
	printf("%c\n", '\101') ;
    putchar('\101');
    printf("\n");
    int a = 5, b, c;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", a);
    int i = 8;
    printf("%d \n", ++i);
    printf("%d \n", --i);
    printf("%d \n", i++);
    printf("%d \n", i--);
    printf("%d \n", -i++);
    printf("%d \n", i);
    printf("%d \n", -i--);
    printf("z: %f \n", 7.0 / 4);
    float f = 31.1;
    printf("z: %d %e\n", (int) f, f  );
    printf("f: %g\n", f);
    float PI = 3.14;
    float s, r = 5;
    s = r * r * PI;
    printf("s: %g \n", s);
}

#include <stdio.h>

// int max(int a, int b);
#define PP 10
#define STR "zifu"
void main() {
  char vb = '33';
  vb = '34';
  printf("%c \n", vb);
  char x1 = 'A';
  printf("%c \n", x1);
  printf("%d \n", x1);
  printf("r: %f\n", 1.0 /3 * 3);
  int cc = 1.2E2;
  printf("cc: %d\n", cc);
  printf("sizeof int: %d\n", sizeof(unsigned long));
  printf(STR, "\n");
  int r, c;
  c = 2;
  r = PP * c;
  printf("chang: %d\n", r);
  printf("hello world\n");
  int x, y, z;
  int max(int a, int b);
  printf("input two number: \n");
  scanf("%d %d", &x, &y);
  z = max(x, y);
  printf("max number: %d ", z);
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
  
}
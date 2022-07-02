#include <stdio.h>

/**
 * @brief calcate 
 * 
 * @return int 
 */
int main() {
    float lower = 0;
    int upper = 300;
    int step = 20;
    float f = 0;
    printf("I am title\n");
    while (lower <= upper) {
        /* code */
        f = 5.0 * (lower - 32) / 9;
        printf("%3.0f %7.2f\n", lower, f);
        lower += step;
    }
    
}
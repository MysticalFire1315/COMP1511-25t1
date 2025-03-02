#include <stdio.h>

int main(void) {
    int num = 10;

    if (num % 2 == 0) {
        printf("Divisible by 2\n");
    }
    
    if (num % 5 == 0) {
        printf("Divisible by 5\n");
    }

    return 0;
}
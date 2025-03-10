// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    int b = 0;

    int a = 0;
    while (a < MAX_ROW) {
        printf("a: %d\n", a);
        b = 0;
        while (b < MAX_COL) {
            printf("b: %d\n", b);
            b++;
        }
        a++;
    }

    printf("%d %d\n", a, b);

    return 0;
}

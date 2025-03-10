#include <stdio.h>

// Enter a series of integers until you reach a negative number. Then, stop and calculate the sum.

int main(void) {

    char letter;
    // int scanf_return = scanf("%d", &num);
    while (scanf(" %c", &letter) == 1) {
        printf("%c scanned\n", letter);
        // scanf_return = scanf("%d", &num);
    }


    return 0;
}

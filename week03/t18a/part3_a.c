#include <stdio.h>

// Enter a series of integers until you reach a negative number. Then, stop and calculate the sum.

int main(void) {

    int num;
    int sum = 0;
    scanf("%d", &num);
    while (num >= 0) {
        // loop body
        sum += num;
        scanf("%d", &num);
    }

    printf("%d\n", sum);

    return 0;
}
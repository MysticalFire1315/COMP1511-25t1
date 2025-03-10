#include <stdio.h>

int main(void) {

    // int n = 0;
    // int n1 = 0;
    // scanf("%d %d", &n, &n1);

    int sum = 0;
    int num;
    scanf("%d", &num);
    while (num >= 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("%d\n", sum);

    return 0;
}
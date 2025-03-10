#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    
    int sum = 0;
    while (num >= 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("%d\n", sum);

    return 0;
}
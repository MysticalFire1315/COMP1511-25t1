#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        char l;
        scanf(" %c", &l);
        printf("The letter is %c\n", l);
        i++;
    }


    return 0;
}

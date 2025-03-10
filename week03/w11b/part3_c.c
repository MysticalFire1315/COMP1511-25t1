#include <stdio.h>

int main(void) {
    char letter;
    // int scanf_return = scanf(" %c", &letter);
    // while (scanf_return == 1) {
    //     printf("The letter is %c\n", letter);
    //     scanf_return = scanf(" %c", &letter);
    // }

    while (scanf("%c", &letter) == 1) {
        printf("The letter is %c\n", letter);
    }
    
    

    return 0;
}

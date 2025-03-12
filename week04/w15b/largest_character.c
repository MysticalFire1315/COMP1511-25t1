#include <stdio.h>

int main(void) {
    char array[8] = {'a', '1', 'e', 'C', ',', '\n', ')', 'z'};
    char largest_character = array[0];

    int i = 0;
    while (i < 8) {
        if (largest_character < array[i]) {
            largest_character = array[i];
        }
        i++;
    }

    printf("Largest char is %c\n", largest_character);
    return 0;
}
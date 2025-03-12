#include <stdio.h>

int main(void) {
    char array[8] = {'a', '1', '%', 'c', 'Z', ')', '\n', ','};
    char largest = array[0];

    int i = 1;
    while (i < 8) {
        if (largest < array[i]) {
            largest = array[i];
        }
        i++;
    }

    printf("%c\n", largest);

    return 0;
}
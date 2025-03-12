// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// TODO: Function prototype
int sum(int num1, int num2);

int main(void) {
    int result;
    int num1 = 5;
    int num2 = 3;

    // TODO: Function call
    result = sum(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// TODO: Function definition
int sum(int num1, int num2) {
    int total = num1 + num2;
    return total;

// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
	// 1. Declare the variables

	int radius = 1;
	// char letter = 'a';
	// double decimal = 1.0; // decimal = 1;

    // 2. Initalise the variables
    
    // 3. Calculate the area of the circle
    double area = PI * radius * radius;

	// 4. Print the result
	printf("The area of my circle with radius %d is: %.4lf\n", radius, area);

	return 0;
}

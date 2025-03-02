// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.141

int main(void) {
	// 1. Declare the variables
	// int number;
	char letter = 'a';
	
    // 2. Initalise the variables
    // number = -3;

	// int number = -3;
	int radius = 1;

    // 3. Calculate the area of the circle
	double area = PI * radius * radius;
    
	// 4. Print the result
	printf("The area is %.2lf\n", area);

	return 0;
}

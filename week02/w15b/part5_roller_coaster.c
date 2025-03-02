// part5_roller_coaster
//
// This program was written by Joel, z5418566
// on 26 Feb
// This program just checks if a user is tall enough to ride a roller coaster.
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 1
#define THRESHOLD 1.5

int main(void) {

	double height;

	scanf("%lf", &height);

	if (height <= 0) {
		printf("Error: Height cannot be 0 or less\n");
	} else if (height < MIN_HEIGHT) {
		printf("Error: User is not tall enough\n");
	} else if (height < THRESHOLD) {
		printf("You can ride with an adult\n");
	} else {
		printf("You can ride the roller coaster!\n");
	}
	
	return 0;
}

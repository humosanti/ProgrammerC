/* Program 2.20
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* Write a program that prompts for input of the length and width of a room
 * in feet and inches, and the calculates and outputs the floor area in square
 * yards with two decimal places after the decimal point.
 */
#include<stdio.h>

int main(void) {
	float length_feet = 0.0f;
	float width_feet = 0.0f;
	float length_inches = 0.0f;
	float width_inches = 0.0f;
	float square_yard_from_feet = 0.0f;
	float square_yard_from_inches = 0.0f;
	const float inches_to_yard = 0.02777778f;
	const float feet_to_yard = 0.3333333f;
		
	printf("Input length of room in feet:");
	scanf("%f", &length_feet);

	printf("Input width of room in feet:");
	scanf("%f", &width_feet);
	
	
	printf("Input length of room in inches:");
	scanf("%f", &length_inches);

	printf("Input width of room in inches:");
	scanf("%f", &width_inches);


	/* Get outputs the floor */
	square_yard_from_feet = (length_feet * width_feet) * feet_to_yard; 
	printf("\nFloor area FEET to square yards:%.2f\n", square_yard_from_feet);

	square_yard_from_inches = (length_inches * width_inches) * inches_to_yard; 
	printf("Floor area INCHES to square yards:%.2f\n", square_yard_from_inches);

	return 0; }

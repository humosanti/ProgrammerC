/* Program 2.19 
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* Write a program that prompts the user to enter a distance in inches and then
 * outputs that distance in yards, feet, and inches. */
#include<stdio.h>

int main(void) {
	float inches = 0.0f;
	float feet = 0.0f;
	float const inches_to_feet = 0.08333333f;
	float const inches_to_yard = 0.02777778f;

	/* Get inches */
	printf("Insert unit in inches:");
	scanf("%f", &inches);

	/* Print inches */
	printf("Inches:%.2f\n", inches);
	
	/* Print feet */
	printf("Feets:%.8f\n", inches * inches_to_feet);
	
	/* Print yard */
	printf("Yards:%.8f\n", inches * inches_to_yard);

	return 0; }

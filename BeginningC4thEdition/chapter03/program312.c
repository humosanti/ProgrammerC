/* Program 3.12 Celsius to Fahrenheit
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* Exercise 3.12 Write a program that will first allow a user to choose one of 
 * two options:
 * 1. Convert a temperature from degrees Celsius to degrees Fahrenheit.
 * 2. Convert a temperature from degrees Fahrenheit to degrees Celsius.
 * The program should then prompt for the temperature value to be entered and 
 * output the new value that results from the conversion. To convert from 
 * Celsius to Fahrenheit you can multiply the value by 1.8 and then add 32. To 
 * convert from Fahrenheit to Celsius, you can subtract 32 from the value, then 
 * multiply by 5, and divide the result by 9.
 */
#include<stdio.h>

int main(void) {	
	double operation = 0.0; /* degress Celsius degres Fahrenheit */
	char oper = 0; /* C or F */
	printf("\n\nConvert Fahrenheit or Celsius; c6.7 Or f6.7\n");
	scanf("%c %lf", &oper, &operation);
	switch(oper) {
		case 'c':
			printf("Degress Celsius %lf\n\n",(((operation - 32) * 5)/9));
			break;
		case 'f':
			printf("Degress Fahrenheit %lf\n\n",(((operation * 9)/5) + 32));
			break;
		default:
			break; }
	return 0; }

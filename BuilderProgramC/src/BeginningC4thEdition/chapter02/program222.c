/* Program 2.22
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* Write a program that prompts for the user\s weekly pay in dollars and the 
 * hours worked to be entered through the keyboard as floating-point values.
 * The program should then calculate and output the average pay per hour in the
 * following form:
 *
 * You average hourly pay rate is 7 dollars and 54 cents.
 * */
#include<stdio.h>

int main(void) {
	float pay_week = 0.0f;
	float hours_week = 0.0f;
	int pay_hours = 0L;
	float pay_hours_decimal = 0.0f;

	printf("Total pay week $");
	scanf("%f", &pay_week);
	
	printf("Worked hours week:");
	scanf("%f", &hours_week);

	pay_hours = pay_week / hours_week;
	pay_hours_decimal = pay_week / hours_week;

	printf("You average hourly pay rate is %d dollars and %.f cents.\n", pay_hours, ((pay_hours - pay_hours_decimal) * -100));


	return 0; }

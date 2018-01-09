/* Program 3.13 
 * 
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* Write a program that prompts the user to enter the date as three integer
 * values for the month, the day in the month, and the year. The program should
 * then output the date in the form 31st December 2003 when the user enters 
 * 12 31 2003, for example
 * You will need to work out when th, nd, st, and rd need to be appended to
 * the day value, Don't forget 1st, 2nd, 3rd, 4th; but 11th, 12th, 13th, 14th;
 * and 21st, 22nd, 23rd, and 24th.
 */
#include<stdio.h>

enum Weekday {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturnday};
enum {January, Febrary, March, April, May, June, July, August, September, October, November, December} Month;

int main(void) {
	int day = 0;
	int month = 0;
	int year = 0;

	printf("\n\nEnter format [date day month year] ");
	scanf("%d %d %d", &day, &month, &year);


	switch(month) {
		case 12:
			Month = month;
			break;
		default:
			break; }

	/* output print screen */
	
	printf("Type date: %d %d %d\n", day, month, year);

	return 0; }

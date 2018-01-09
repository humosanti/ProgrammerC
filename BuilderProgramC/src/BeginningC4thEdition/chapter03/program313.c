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

int main(void)
{
	int day = 0;
	int month = 0;
	int year = 0;

	printf("\n\nEnter format [date day month year] ");
	scanf("%d %d %d", &day, &month, &year);

	switch(day)
	{
	case 1:
		printf("1st ");
		break;
	case 2: case 22:
		printf("2nd ");
		break;
	case 3: case 23:
		printf("3rd ");
		break;
	/*case 4: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
	case 18:case 19: case 20: case 24: case 25: case 26: case 27:
	case 28: case 29: case 30:
		printf("4th");
		break;*/
	case 21:
		printf("21st ");
		break;
	default:
		printf("%dth ",day);
		break;
	}

	switch(month)
	{
	case 1:
		printf("January ");
		break;
	case 2:
		printf("Febrary ");
		break;
	case 3:
		printf("March ");
		break;
	case 4:
		printf("April ");
		break;
	case 5:
		printf("May ");
		break;
	case 6:
		printf("June ");
		break;
	case 7:
		printf("July ");
		break;
	case 8:
		printf("August ");
		break;
	case 9:
		printf("September ");
		break;
	case 10:
		printf("October ");
		break;
	case 11:
		printf("November ");
		break;
	case 12:
		printf("December ");
		break;
	default:
		printf("Month don't valid!");
		break;
	}

	/* output print screen */
	printf("%d\n", year);

	return 0;
}

/* Program SimpleSimon
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 * v.1.0.0
 *
 */
#include<stdio.h> /* For input and output */
#include<ctype.h> /* For toupper() function */

int main(void)
{
	/* Records if another play is to be played */
	char another_game=0;

	/* Describe how the game is played */
	printf("\nTo played Simple Simon, ");
	printf("watch the screen for a sequence of digits.");
	printf("\nWatch carrefully, as the digits are only displayed "
"for a second! ");
	printf("\nThe computer will remove them, and then prompt you ");
	printf("to enter the same sequence.");
	printf("\nWhen you do, you must put space between the digits. \n");
	printf("\nGood Lock!\nPress Enter to play\n");

	/* One outer loop interation is one game */
	do
	{
		printf("\nDo you want to play again (y/n)");
		scanf(" %c",&another_game);
	} while(toupper(another_game)=='Y');

	/* End play SimpleSimon */
	return 0;
}

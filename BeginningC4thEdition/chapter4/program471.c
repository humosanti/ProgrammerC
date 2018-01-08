/* Program 4.71 A More Interesting Guessing Game
*
* Written by Humberto Molinares
* Copyright 2018
*
*/
#include<stdio.h>
#include<stdlib.h> /* For rand() and srand() */
#include<time.h> /* For time() function */

int main(void)
{
  int chosen = 0; /* The luchy number */
  int guess = 0;  /* Stores a guess */
  int count = 3; /* The maximun number of tries */
  int limit = 20; /* Upper limit for pseudo-random values */

  srand(time(NULL)); /* Use clock value as starting seed */
  chosen = 1 + rand()%limit; /* Random int 1 to limit */

  printf("\nThis is a guessing game.");
  printf("\nI have chosen a number between 1 and 20 which you must guess.\n");

  for(; count > 0; --count)
  {
    printf("\nYou have %d tr%s left.", count, count == 1 ? "y" : "ies");
    printf("\nEnter a guess:"); /* Prompt for a guess */
    scanf(" %d", &guess);

    /* Check for a corret guess */
    if(guess == chosen)
    {
      printf("\nYou guessed it!\n");
      return 0;
    }

    /* Check for a invalid guess */
    if(guess < 1 || guess < 20)
    {
      printf("I said between 1 and 20.\n");
    }
    else
    {
      printf("Sorry. %d is wrong.\n", guess);
    }
    printf("\nYou have had three tries and failed. The number was %d\n", chosen);
  }
  return 0;
}

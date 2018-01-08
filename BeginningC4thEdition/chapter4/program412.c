/* Program 4.12 Simple Simon
*
* Written by Humberto Molinares
* Copyright 2018
*
* v1.0.17
*/
#include<stdio.h> /* For input and output */
#include<ctype.h> /* For toupper() function */
#include<stdbool.h> /* For bool, true, false */
#include<stdlib.h> /* For rand() and srand() */
#include<time.h> /* For time() function */

int main(void)
{
  /* Records if another game is to be played */
  char another_game = 'Y';

  /* true if correct sequence entered, false otherwise */
  bool correct = false;

  /* Number of sequences entered succssfully */
  int counter = 0;

  int sequence_length = 0; /* Number of digits in a sequence */
  time_t seed = 0; /* Seed value for random number sequence */
  int number = 0; /* Stores an input digit */

  time_t now  = 0; /* Store current time - seed for random values */
  int time_taken = 0; /* Time taken for game in seconds */

  /* Describe how the game is played */
  printf("\nTo play Simple Simon, ");
  printf("watch the screen for a sequence of digits.");
  printf("\nWatch carefully, as the digits are only displayd for a second!");
  printf("\nThe computer will remove them, and then prompt you ");
  printf("to enter the same sequence.");
  printf("\nGood luch!\nPress Enter to play\n");
  scanf("%c", &another_game);

  /* One outer loop iteration is one game */
  do
  {
    correct = true; /* Bydefault indicates correct sequence entered */
    counter = 0; /* Initialize count of number of successful tries */
    sequence_length = 2; /* Initial length of a digit sequence */
    time_taken = clock(); /* Recond current time at start of game */

    /* Inner loop continues as long as sequences are entered correctly */
    while(correct)
    {
      /* On every third successful try, increase the sequence length */
      sequence_length += counter++%3 == 0;

      /* Set seed to be the number o seconds since Jan 1,1970 */
      seed = time(NULL);

      now = clock(); /* record start time or sequence */

      /* Generate a sequence of numbers and display the number  */
      srand((unsigned int)seed); /* Initializa the random sequence */
      for(int i = 1; i <= sequence_length; i++)
      {
        printf("%d ", rand() % 10); /* Output a random digit */
      }

      /* Wait one second */
      for(; clock() - now < CLOCKS_PER_SEC;);

      /* Now overwrite the digit sequnce */
      //printf("\r"); /* go to begining of the line */
      for(int i = 1; i <= sequence_length; i++)
      {
        printf(" "); /* Output two spaces */
      }

      if(counter == 1)
      {
        printf("\nNow you enter the sequence - dont't forget the spaces\n");
      }
      else
      {
        printf("\r"); /* Back to the beginning of the line */
      }

      /* Check the input sequence of digits against the original  */
      srand((unsigned int)seed); /* Restart the random sequence */
      for(int i = 1; i <= sequence_length; i++)
      {
        scanf("%d", &number); /* Read an input number */
        if(number != rand() % 10) /* Compare against random digit */
        {
          correct = false; /* Incorrect entry */
          break; /* No need to check further... */
        }
      }
      printf("%s\n", correct? "Correct!" : "Wrong!");
    }

    /* Calculate total time to play the game in seconds */
    time_taken = (clock() - time_taken) / CLOCKS_PER_SEC;

    /* Output the game score */
    printf("\n\n Your score is %d", --counter * 100 / time_taken);

    fflush(stdin);

    /* Check if a new game is required */
    printf("\nDo you want to play again (y/n)?");
    scanf(" %c", &another_game);
  } while(toupper(another_game) == 'Y');

  return 0;
}

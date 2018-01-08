/* Program 4.11 Reversing digits
*
* Written by Humberto
* Copyright 2018
*
*
*/
#include<stdio.h>

int main(void)
{
  int number = 0; /* The number to be reserved */
  int rebmun = 0; /* The resersed number */
  int temp = 0; /* Working storage */

  /* Get the value to be resersed*/
  printf("\nEnter a positive integer:");
  scanf(" %d", &number);

  temp = number; /* Copy to wroking storage */

  /* Reverse the number stored in tempo */
  do
  {
    rebmun = 10 * rebmun + temp % 10; /* Add the righmost digit */
    temp = temp / 10; /* Remove the righmost digit */
  } while(temp); /* Continue while temp > 0 */

  printf("\nThe number %d reversed is %d rebmun ehT\n", number, rebmun);

  return 0;
}

/* Program 4.4 Summing integers
*
* Written by Humberto Molinares
* CopyRight 2018
*
*/
#include<stdio.h>

int main(void)
{
  long sum = 0L; /* Stores the sum of the integers */
  int count = 0L; /* The numbr of integers to be summed */

  /* Read the numbr of integers to be summed */
  printf("\nEnter the number of integers ytou want to sum:");
  scanf(" %d", &count);

  /* Sum integers from 1 to count */
  for(int i = 1; i <= count; sum += i++);
  // 0-1-3-6-10-15-21-28
  printf("\nTotal of the first %d numbers is %ld\n", count, sum);
  return 0;
}

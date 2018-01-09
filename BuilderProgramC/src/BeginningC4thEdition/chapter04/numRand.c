/* Program numRand
 *
 * Written by Humberto
 * Copyright 2018
 *
 *
 */
#include<stdio.h>
#include<stdlib.h> /* generate number random */
#include<time.h>
int main(void)
{
	srand(time(NULL));
	printf("%d",1+rand()%20);
	return 0;
}

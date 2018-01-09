/* Program 4.2 Drawing a box
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
#include<stdio.h>

int main(void) { 
	printf("\n**************"); /* Draw the top the box */
	for( int count = 1; count <= 8; ++count) {
		printf("\n*            *"); } /* Draw the sides of the box */	
	printf("\n**************\n"); /* Draw the bottom of the box */
	return 0; }


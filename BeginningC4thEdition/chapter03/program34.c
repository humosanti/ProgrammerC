/* Program 3.4 Converting uppercase to lowercase
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
#include<stdio.h>

int main(void) {
	char letter = 0; /* Stores a charter */
	printf("Enter an uppercase letter:"); /* Propmpt for input */
	scanf("%c", &letter); /* Read a character */

	/* Check whether the input is uppercase */
	if(letter >= 'A') { /* Is it A or greater? */
		if(letter <= 'Z') { /* and is it Z or lower? */
			letter = letter - 'A' + 'a'; /* Convert from upper- to lowercase */
			printf("You entered an uppercase %c\n", letter); }
		else {
			printf("Try using the shift key, Bud! I want a capital letter.\n"); } }
	return 0; }

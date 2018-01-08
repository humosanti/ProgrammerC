/* Program 3.11 A calculator
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
#include<stdio.h>

int main(void) {
	double number1 = 0.0; /* First operand value a decimal number */
	double number2 = 0.0; /* Second operand value a decimal number */
	char operation = 0; /* Operation - must be +, -, x, / or % */
	char another = 0; /* Return another calcutation */

Another:
	printf("\nEnter the calculation\n");
	scanf(" %lf %c %lf", &number1, &operation, &number2);

	/* Plus the rest of the code for the program */
	switch(operation) {
		case '+': /* No checks necessary for add */
			printf("= %lf\n", number1 + number2);
			break;
		case '-': /* No checks necessary for add */
			printf("= %lf\n", number1 - number2);
			break;
		case '*': /* No checks necessary for add */
			printf("= %lf\n", number1 * number2);
			break;
		case '/': /* Check second operand for zero */
			if(number2 == 0) {
				printf("\n\nDivision by zero error!\n"); }
			else {
				printf("= %lf\n", number1 / number2); }
			break;
		case '%': /* Check second operand for zero */
			if((long)number2 == 0) {
				printf("\n\nDivision by zero error!\n"); }
			else {
				printf("= %ld\n", (long)number1 % (long)number2); }
			break; 
		default: /* Operation is invalid if we get to here */
			printf("\n\nIllegal operation!\n");
			break; }
       	

	/* Plus the rest of the code for the program */
	printf("\nEnter yY or nN to carry out another calculation? ");
	scanf(" %c", &another);
	switch(another) {
		case 'y' : case 'Y' :
			goto Another;
			break;
		case 'n' : case 'N' :
			break;
		default:
			break; }

	return 0; }

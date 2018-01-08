/* Program 3.14
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* Write a program that will calculate price for a quantity entered from the 
 * keyboard, given that the unit price is $5 and there is discount of 10 
 * porcent for quantities over 30 and a 15 percent discount for quantities over
 * 50
 */
#include<stdio.h>

int main(void) {
	const double unit_price = 5;
	const double discount1 = 0.1;
	const double discount2 = 0.15; /* 127 */
	double total_price = 0;
	int quantity = 0;

	printf("\nEnter the number that you want to buy ");
	scanf("%d", &quantity);

	total_price = quantity * unit_price * (1.0 - (quantity > 30 ? discount1 : (quantity > 50 ? discount2 : 0.0)));
	printf("The total for %d is $%.2f\n", quantity, total_price);

	return 0; }

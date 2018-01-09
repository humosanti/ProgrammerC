/* Program 3.2 Using if statement to decide on a discount
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
#include<stdio.h>

int main(void) {
	const double unit_price = 3.50; /* Unit price in dollars */
	int quantity = 0;
	printf("Enter the number that you want to buy:"); /* Prompt message */
	scanf("%d", &quantity);
	
	/* Test for order quantity qualifying for a discount */
	if(quantity > 10) {
		printf("The price for %d is $%.2f\n", quantity, quantity * unit_price * 0.95); }
	else {
		printf("The price for %d is $%.2f\n", quantity, quantity * unit_price); }
	return 0; }

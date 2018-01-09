/* Program 2.21
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
/* You\'re selling a product that's available in two version: type 1 is a
 * standard version price at $3.50, and type 1 is a deluxe version priced at
 * $5.50. Write a program using only what you\'ve learned up to to now that
 * prompts for the user to enter the product type and a quantity, and then 
 * calculates and outputs the price for the quantity entered.
 */
#include<stdio.h>

int main(void) {

	float price_type_A = 3.50f;
	float price_type_B = 5.50f;
	float total = 0.0f;
	int type = 0L;
	int quantity = 0L;

	printf("Product type 1: $3.50 type 2: $5.50 Cual elige? ");
	scanf("%d", &type);

	if (type == 1) {
		printf("Product quantity? ");
		scanf("%d", &quantity);
		total = price_type_A * quantity; }
	else if (type == 2) {
		printf("Product quantity? ");
		scanf("%d", &quantity);
		total = price_type_B * quantity; }
	else { printf("\nOption no available.\n"); }
		
	printf("Total you are buying:$%.2f\n",total);


	return 0; }

/* Program 5E3
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 *
 * */
/* Write a program that will read five values from the keyboard and store
 * them in an array of type float with the name amounts. Create two arrays of five
 * elements of type long with the name dollars and cents. Store the whole number
 * part of each value in the amounts array in the corresponding element of
 * dollars and the fractional part of the amounts as a two-digit integer in
 * cents (e.g., 2.75 in amounts[1] would result in 2 being stored in dollars[1]
 * and 75 being stored in cents[1]). Output the values from the two arrays of
 * type long as monetary amounts (e.g.,$2.75)
 * */
#include<stdio.h>

int main(void)
{
	int i=0; /* Iterator record at array */
	float value=0.0f; /* Dinero persona */
	double amounts[5]={3.56,12.2,4.0,121.8,0.34}; /* Saldo cuenta */
	int dollars[5]; /* Parte entera del saldo */
	int cents[5]; /* Parte decimal del saldo */
	int parte_entera=0;
	int parte_decimal=0;
	do
	{
		printf("\nEnter the sald :$");
		scanf(" %eee",&value);
		amounts[i]=value;
		
		/* Separar la parte entera de la decimal */
		printf("\namounts[%f]",amounts[i]);
		parte_entera=(long)amounts[i];	
		dollars[i]=parte_entera;

		//parte_decimal=(parte_entera-(double)amounts[i]);
		parte_decimal=(((double)amounts[i])-parte_entera)*100;
		cents[i]=parte_decimal;

		/* Store part entera array dollars */
		printf("\nDollars:[%d]",dollars[i]);

		/* Store part decimal array cents */
		printf(" cents:[%d]",cents[i]);

		i++;
	} while(i<5);
    return 0;
}

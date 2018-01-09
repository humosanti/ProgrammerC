/* Program 4E4
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 */
/* Use nested loop to output a box bounded by asterik as in program 4.2
 * but witch a width and height than's entered by the user. For example
 * a box ten characters wide and seven characters high would display as
 * followin
 *  **********
 *  *        *
 *  *        *
 *  *        *
 *  *        *
 *  *        *
 *  *        *
 *  *        *
 *  **********
 */
#include<stdio.h>

int main(void)
{
	int width=0;
	int height=0;
	int i=0;
	int j=0;

	printf("Se va a imprimir la siguiente caja:\n");
	printf("\n**********");

	do
	{
		printf("\n*        *");
		++i;
	} while(i<7);

	printf("\n**********\n");

	printf("Ingrese un largo por alto de su caja particular Ancho x Alto: ");
	scanf("%d %d", &width, &height);

	i=0;
	do
	{
		printf("*");
		++i;
	} while(i<width);

	printf("\n");


	i=0;
	do
	{
		printf("*");
		do
		{
			printf(" ");
			++j;
		} while(j<(width-2));
		j=0;
		printf("*\n");
		++i;
	} while(i<height);

	i=0;
	do
	{
		printf("*");
		++i;
	} while(i<width);

	printf("\n");

	return 0;
}

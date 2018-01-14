/* Program 5E2
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 *
 * */
/* Define an array, Data, with 100 elements of type double. Write a loop
 * that will store the sequence of values in corresponding elements of the
 * array
 * 1/(2*3*4) 1/(4*5*6) 1/(6*7*8) ... up 1/(200*201*202)
 * Write other loop that will calculate the following
 * data[0]-data[1]+data[2]-data[3]+...-data[99]
 * Multiply the result of this for 4.0, add 3.0, and output the final
 * result. Do you recognize the value that you get?
 * */
#include<stdio.h>

int main(void)
{
	double elements[100];
	int i=0;
	int x=0;
	int y=1;
	int z=2;
	double result=0;
	do
	{		
		elements[i]=(double)1/((x+=2)*(y+=2)*(z+=2));
		printf("[%d] ~ %.5e\n",i,elements[i]);
		i++;
	} while(i<100);
	i=0;
	y=0;
	do
	{
		switch(y)
		{
		case 0:
			result+=elements[i];
			y=1;
			break;
		case 1:
			result-=elements[i];
			y=0;
			break;
		default:
			break;
		}
		i++;
	} while(i<100);
	printf("%.25e\n",(double)result);
	printf("%.5e x 4.0 = %.25e\n",result, result*4.0);
	printf("%.5e + 3.0 = %.25e\n",(result*4.0), (result*4.0)+3.0);
    return 0;
}

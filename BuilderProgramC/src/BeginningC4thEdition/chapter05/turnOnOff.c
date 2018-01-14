#include <stdio.h>

void binary(int ing);

int main(void){
    int a = 2, b = 64;
    printf("\n a = %d ---> en binario = ", a); 
	binary(a);
    printf("\n b = %d ---> en binario = ", b); 
	binary(b);


    //a & b?printf("\n\n Encendido\n\t"):printf("\n\n Apagado\n\t");

    printf(" \n\n");
    return 0;
}

void binary(int ing)
{
    int remainder;
    if(ing <= 1) {printf("%d", ing); return;}
    remainder = ing%2;
    binary(ing >> 1);
    printf("%d", remainder);
}

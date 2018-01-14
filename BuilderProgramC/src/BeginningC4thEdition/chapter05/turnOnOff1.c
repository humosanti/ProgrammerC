    #include <stdio.h>
     
    int main(void){
    	//unsigned int numero=0, mask=0, ch;
     
    	//printf("\n\n Ingrese un entero sin signo...............:");
    	//scanf("%d", &numero);
    	//while ((ch = getchar()) != EOF && ch != '\n');
     
    	//printf("\n\n Indique que bits desea saber el estado....:");
    	//scanf("%d", &mask);
    	//while ((ch = getchar()) != EOF && ch != '\n');
     
    	//mask <<= 2;
     
    	//printf(numero & mask ? "\n Encendido" : "\n Apagado");
     
    	//getchar();

// 00000000 00000000 00000000 00000000
// 31 .............................  0 
//  0 ............................. 31

int i=sizeof(int)*8;
unsigned int n=1, mask;
printf("Intrese un numero:");
scanf(" %d",&n);
printf("\nbit:");
do{
	mask=1<<i;
	switch(i)
	{
	case 4: case 8: case 12: case 16: case 20: case 24: case 28: case 32: case 36:
		printf(" ");
	default:
		if(n&mask)
		{
			printf("%d",1);
		}
		else
		{
			printf("%d",0);
		}
	break;
	}
	i--;
} while(i>0);
	printf("\n");
    	return 0;
    }

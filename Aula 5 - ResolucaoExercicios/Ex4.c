#include <stdio.h>


void main()
{


//Declaração de Variáveis

	float F,C;


//Entrada de Dados

	printf("Digite o valor em graus Fahrenheit: \n");
	scanf("%f",&F);

 
//Processamento

	C=(F-32)*5/9;


//Saída de Informações

	printf("%.1f graus Fahrenheit equivalem a %.1f graus Celsius",F,C);


	
}
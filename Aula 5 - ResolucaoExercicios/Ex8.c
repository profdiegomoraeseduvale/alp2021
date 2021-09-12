#include <stdio.h>


void main()
{


//Declaração de Variáveis

	char nome[80];
	float salariobruto, salarioliquido;

//Entrada de Dados

	printf("Digite o nome do funcionário: \n");
	scanf("%s",&nome);

	printf("Digite o salário bruto: \n");
	scanf("%f",&salariobruto);

 

//Processamento

	salarioliquido=salariobruto-(salariobruto*0.11);



//Saída de Informações

	printf("Nome do funcionário: %s",nome);
	printf("Salário Bruto: R$%.1f",salariobruto);
	printf("Salário Líquido: R$%.1f",salarioliquido);



	
}
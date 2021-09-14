#include <stdio.h>

int main()
{

    char nome[80];

	
	printf("\n Digite seu nome: ");
	fgets(nome, 80, stdin);

	printf("O nome é %s\n ",nome);
	
	return 0;

}

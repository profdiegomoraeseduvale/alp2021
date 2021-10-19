#include <stdio.h>

//Declaração da Função
void imprimeNome();

int main(void) {
    
  char nome[80];

  printf("Digite um nome\n");
  scanf("%[^\n]",nome);

  imprimeNome(nome);
  
  return 0;
}



//Programação da Função
void imprimeNome(char texto[80]){
  printf("%s",texto);
}
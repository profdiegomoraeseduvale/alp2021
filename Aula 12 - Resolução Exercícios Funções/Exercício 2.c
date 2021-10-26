#include <stdio.h>

void acesso();

int main(){

  int senha;

  printf("Informe a senha: \n");
  scanf("%d", &senha);  

  acesso(senha);

 return 0;

}

void acesso(int x){

   int senhabd = 1234;
   

   if(x==senhabd){

      printf("Acesso Permitido");

   }else{

      printf("Acesso Negado");

   }

}
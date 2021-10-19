#include <stdio.h>

//Declaração da Função
float mediaNumero(float x, float y);

int main(void) {

  float a = 6, b = 10;

  printf("%.2f",mediaNumero(a,b));  
  

  return 0;
}



//Programação da Função
float mediaNumero(float x, float y){

  float media = (x+y)/2;

   return media;

}
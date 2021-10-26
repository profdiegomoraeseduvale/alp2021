#include <stdio.h>

float calculadora(float x, float y, int opt);

int main(){


  float a, b, resultado;
  int opt;

  printf("Selecione a opção desejada: \n");
  printf("1 - SOMA \n");
  printf("2 - SUBTRAÇÃO \n");
  printf("3 - MULTIPLICAÇÃO \n");
  printf("4 - DIVISÃO \n");

  scanf("%d", &opt);

  printf("Informe o primeiro número: \n");
  scanf("%f", &a);

  printf("Informe o segundo número: \n");
  scanf("%f", &b);

  resultado = calculadora(a,b,opt);

  printf("O resultado da operação é %0.2f ", resultado);

  return 0;

}

float calculadora(float x, float y, int opt){


   switch(opt){

    case 1 : return x+y; break;
    case 2 : return x-y; break;
    case 3 : return x*y; break;
    case 4 : return x/y; break;

    default : printf("Opção Inválida");


   }

  return 0;
}
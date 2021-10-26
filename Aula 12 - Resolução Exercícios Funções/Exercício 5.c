#include <stdio.h>

int fatorial(int num);

int main(){


  int num;
  

  printf("Informe um número: \n");
  scanf("%d", &num);

  printf("O fatorial de %d é %d",num,fatorial(num));

 
}

int fatorial(int num){

    
    int fat = 1;

    for (int i = num; i > 0; i--)
    {
        fat = fat*i;
    }

    return fat;


}
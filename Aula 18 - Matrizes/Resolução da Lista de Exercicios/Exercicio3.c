#include <stdio.h>

int main(){
   
   int A[3][3];
   int acima = 0, abaixo = 0;

   //Ler a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("Digite o valor da célula (%d,%d)",lin,col);
       scanf("%d",&A[lin][col]);
       if(lin<col){
         acima = acima + A[lin][col];
       }else if(lin>col){
         abaixo = abaixo + A[lin][col];
       }       
     }
   }

   //Imprimir a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("%d  ",A[lin][col]);       
     }
     printf("\n");
   }

   //Imprmir soma dos valores acima e abaixo da diagonal principal
   printf("Soma de valores acima da diagonal: %d \n",acima);
   printf("Soma de valores abaixo da diagonal: %d \n",abaixo);   

  return 0;
}
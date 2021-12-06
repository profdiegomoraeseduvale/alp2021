#include <stdio.h>

int main(){
   
   int A[3][3];
   int maior = 0;

   //Ler a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("Digite o valor da célula (%d,%d)",lin,col);
       scanf("%d",&A[lin][col]);

       if(A[lin][col]>10){
         maior++;
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

   //Imprimir quantidade de números maiores que 10
   printf("Quantidade de números da matriz maior que 10: %d",maior);

  return 0;
}
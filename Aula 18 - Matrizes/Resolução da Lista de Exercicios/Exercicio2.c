#include <stdio.h>

int main(){
   
   int A[3][3];
   int maior = 0;

   //Ler a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("Digite o valor da célula (%d,%d)",lin,col);
       scanf("%d",&A[lin][col]);

       //Verifica se valor é da diagonal
       if(lin==col){
         A[lin][col] = 0;
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

  return 0;
}
#include <stdio.h>

int main(){
   
   int A[3][3];
   int maior, maiorL, maiorC;

   //Ler a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("Digite o valor da célula (%d,%d)",lin,col);
       scanf("%d",&A[lin][col]);

       if(lin == 0 && col == 0){
           maior = A[0][0];
           maiorL = lin;
           maiorC = col;
       }else{
         if(A[lin][col]>maior){
           maior = A[lin][col];
           maiorL = lin;
           maiorC = col;
         }
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

   //Imprime o maior valor
   printf("O maior valor é %d \n",maior);
   printf("A coordenada é [%d,%d]",maiorL, maiorC);  
      

  return 0;
}
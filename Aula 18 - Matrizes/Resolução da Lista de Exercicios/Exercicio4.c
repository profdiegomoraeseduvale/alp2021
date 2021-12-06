#include <stdio.h>

int main(){
   
   int A[3][3];
   int x, flag=0;

   //Ler a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("Digite o valor da célula (%d,%d)",lin,col);
       scanf("%d",&A[lin][col]);       
     }
   }

   //Imprimir a matriz
   for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       printf("%d  ",A[lin][col]);       
     }
     printf("\n");
   }

   //Informar o valor para busca
    printf("Digite o valor para buscar:");
    scanf("%d",&x);          
  
  //Buscar o valor na matriz
  for(int lin = 0; lin < 3; lin++){
     for(int col = 0; col < 3; col++){
       if(A[lin][col]==x){
         printf("Valor encontrado na coordenada [%d %d]\n",lin,col);
         flag = 1;
       }       
     }
   }

   if(flag==0){
     printf("Valor não encontrado");
   }   

  return 0;
}
#include <stdio.h>

int main(){

 int numL, numC;

 
 //Definir Tamanho da Matriz
 printf("Informe o número de Linhas: \n");
 scanf("%d",&numL);

 printf("Informe o número de Colunas: \n");
 scanf("%d",&numC);


 //Definir Matriz
 int A[numL][numC];
 
  //Preencher Matriz
 for (int i = 0; i < numL; i++)
 {
 	for (int j = 0; j < numC; j++)
 	{
 		printf("Digite o valor da posição %d,%d \n",i,j);
 		scanf("%d",& A[i][j]);
 	}
 }
 
 //Imprimir Matriz

  for (int i = 0; i < numL; i++)
 {
 	for (int j = 0; j < numC; j++)
 	{
 		printf("%d ",A[i][j]);
 		
 	}
 	
 	printf("\n");
 }
return 0;
}
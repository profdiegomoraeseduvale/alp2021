#include <stdio.h>


float conceitoAluno(float n1, float n2, float n3);
void mensagemMedia(float media);

int main(){


  float n1, n2, n3, resultado;
  

  printf("Informe a primeira nota: \n");
  scanf("%f", &n1);

  printf("Informe a segunda nota: \n");
  scanf("%f", &n2);

  printf("Informe a terceira nota: \n");
  scanf("%f", &n3);

  resultado = conceitoAluno(n1,n2,n3);
   
  mensagemMedia(resultado); 

  return 0;

}



float conceitoAluno(float n1, float n2, float n3){

      return (n1+n2+n3)/3; 

}

void mensagemMedia(float media){

     if(media>=7.0){
        printf("A média é %.2f --> Aprovado",media);
     }else{
        if(media<4){
            printf("A média é %.2f --> Reprovado", media); 
        }else{
             printf("A média é %.2f --> Exame",media);
        }
     }

}
#include <stdio.h>

void radarMulta(float velocidade, int tipo);

int main(){


  float velocidade;
  int opt;
  

  printf("Informe a velocidade do veículo: \n");
  scanf("%f", &velocidade);

  printf("Informe o tipo do veículo (0-->Leve 1--Pesado): \n");
  scanf("%d", &opt);
  
  radarMulta(velocidade,opt);

  return 0;
 
}


void radarMulta(float velocidade, int tipo){

     switch(tipo){

      case 0 : 

             if(velocidade>120){
                printf("Veículo Multado");
             }else{
                printf("Veículo Não Multado");
             } break;

      case 1 :

             if(velocidade>90){
                printf("Veículo Multado");
             }else{
                printf("Veículo Não Multado");
             }  break;   
             
            default : printf("Veículo Inválido");

     }

}
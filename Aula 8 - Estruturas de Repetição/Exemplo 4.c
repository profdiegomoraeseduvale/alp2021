#include<stdio.h>

int main(){
 
 int cont;
 float nota, total, media;

 for(cont=1; cont<=4; cont++){
     printf("Digite a nota %d:", cont);
     scanf("%f",&nota);
     total = total + nota;
     media = total/cont;
 }



printf("A média final é %.2f", media);

return 0;
}
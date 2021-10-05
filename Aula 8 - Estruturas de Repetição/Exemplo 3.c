#include<stdio.h>

int main(){
 int n;
 do{

    printf("Digite um numero ou zero para sair: ");
    scanf("%d", &n);
    if(n!=0){
        if( n%2 == 1 )
        printf("%d é ímpar\n", n);
        else
        printf("%d é par\n", n);
    }  

}while( n != 0 );

 printf("Programa encerrado! Obrigado!");

return 0;
}
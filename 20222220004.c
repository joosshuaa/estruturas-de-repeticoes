#include <stdio.h>
#include <stdlib.h>
/*Construa um algoritmo que leia um conjunto de 20 números
 inteiros e mostre qual foi o maior e o menor valor fornecido*/
int main(){
    int num; 
    int maior;
    int menor;
    do{
    printf("Digite 20 numeros aleatorios: ");
    scanf("%d",&num);
    if((num>=maior)&&(num>=menor)){
        maior=num;
    }else{
        if((num<maior)&&(num<menor)){
            menor=num;
        }
    }
}while(num<=19);
printf("O numero maior eh: %d",maior);
printf("\nO numero menor eh: %d",menor);

    return 0;
}
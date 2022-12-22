#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo que lê 50 números inteiros
 e em seguida mostra a soma de todos os ímpares lidos.*/
int main(){
    int num;
    int soma = 0;
    for(num=1; num<=50; num++)
        if(num % 2 == 1)
            soma += num;
    printf("Soma de todos os impares entre 1 a 50: %d\n\n", soma);

    return 0;
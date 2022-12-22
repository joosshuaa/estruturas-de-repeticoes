#include <stdio.h>
/*Faça um programa para imprimir a tabuada de 1 a 9 utilizando laços de repetição.*/
int main(){
    int numero;
    int contador;

    printf("------Tabuada------\n\n");
    printf("Digite o numero da tabuada: ");
    scanf("%d", &numero);

    for(contador=1;contador<=9;contador++){
        printf("%d x %d = %d\n", numero, contador, numero*contador);
    }
    return 0;
}
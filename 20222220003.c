#include <stdio.h>
#include <stdlib.h>
/*Altere o algoritmo anterior para que ele considere 
apenas a soma dos ímpares que estejam entre 100 e 200.*/
int main(){
    int num;
    int soma = 0;
    for(num=100; num<=200; num++)
        if(num % 2 == 1)
            soma += num;
    printf("Soma de todos os impares: %d\n\n", soma);

    return 0;
} 
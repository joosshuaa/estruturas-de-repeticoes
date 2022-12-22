#include <stdio.h>

/*Faça um programa que leia do teclado cinco números e imprima na tela 
a soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.*/
int main(){
    int num;
    int soma;
    for(soma=1;soma<=5;soma++){
        printf("numero %d: ", soma);
        scanf("%d",&num);
        soma += num;
        printf("\nResultado da soma eh: ", soma);
    }
    
    return 0;
}
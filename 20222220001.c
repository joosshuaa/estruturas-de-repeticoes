#include <stdio.h>

/*Faça um programa que leia do teclado cinco números e imprima na tela 
a soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.*/
#include <stdio.h>

int main() {
  int num1, num2, soma;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  soma = num1;

  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  soma += num2;

  printf("Digite o terceiro número: ");
  scanf("%d", &num2);
  soma += num2;

  printf("Digite o quarto número: ");
  scanf("%d", &num2);
  soma += num2;

  printf("Digite o quinto número: ");
  scanf("%d", &num2);
  soma += num2;

  printf("A soma dos cinco números é: %d\n", soma);
  return 0;
}

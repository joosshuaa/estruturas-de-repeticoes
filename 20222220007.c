#include <stdio.h>
/*Em uma disciplina com três exercícios, um professor deseja saber qual a maior
 e a menor nota de cada exercício e qual a maior e a menor média final. 
 Faça um programa para auxiliá-lo nesta tarefa.*/
int main(){
    float nota1;
    float nota2;
    float nota3;
    float media;
    float maior;
    float menor;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    if((nota1>=maior)&&(nota1>=menor)){
        maior=nota1;
        if ((nota1>=maior)&&(nota1>=menor)){
            menor=nota1;
        }       
    }else if ((nota2>=maior)&&(nota2>=menor)){
        maior=nota2;
        if((nota2>=maior)&&(nota2>=menor)){
            menor=nota2;
        }
    }else if ((nota3>=maior)&&(nota3>=menor)){
        maior=nota3;
        if((nota3>=maior)&&(nota3>=menor)){
            menor=nota3;
        }       
    }
    media = (nota1 + nota2 + nota3)/3;
    printf("\n----------------------------------------------------\n");
    printf("| Exercicio 1 | Exercicio 2| Exercicio 3 | Media     |\n");
    printf("| maior|menor |maior|menor |maior|menor  |maior|menor| \n");
    printf("| %1.2f |%1.2f  |%1.2f |%1.2f  |%1.2f |%1.2f   |%1.2f |%1.2f |\n",nota1, nota2, nota3, maior, menor, media );
    printf("----------------------------------------------------\n");

    return 0;
}
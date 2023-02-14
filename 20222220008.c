#include <stdio.h>
#define NUM_ALUNOS 10
#define NUM_EXERCICIOS 3
/*O programa deve receber como entrada três notas de cada aluno em uma linha;
Deve perguntar ao usuário se deseja inserir as notas de outro aluno, e:
Caso a resposta seja “sim” deve solicitar os dados do próximo aluno.
Caso a resposta seja “não” deve mostrar a maior e a menor nota do primeiro
, do segundo, e do terceiro exercício e a maior e a menor média..*/

int main() {
    float notas[NUM_ALUNOS][NUM_EXERCICIOS];
    int alunoAtual = 0;
    char continuar;

    do {
        printf("Digite as notas do aluno %d (separadas por espaço): ", alunoAtual + 1);
        scanf("%f %f %f", &notas[alunoAtual][0], &notas[alunoAtual][1], &notas[alunoAtual][2]);
        alunoAtual++;

        printf("Deseja inserir as notas de outro aluno? (s/n) ");
        scanf(" %c", &continuar);
    } while (continuar == 's' && alunoAtual < NUM_ALUNOS);

    float maiorNota[NUM_EXERCICIOS] = {0};
    float menorNota[NUM_EXERCICIOS] = {999};
    float maiorMedia = 0;
    float menorMedia = 999;

    for (int i = 0; i < alunoAtual; i++) {
        float media = (notas[i][0] + notas[i][1] + notas[i][2]) / NUM_EXERCICIOS;

        for (int j = 0; j < NUM_EXERCICIOS; j++) {
            if (notas[i][j] > maiorNota[j]) {
                maiorNota[j] = notas[i][j];
            }
            if (notas[i][j] < menorNota[j]) {
                menorNota[j] = notas[i][j];
            }
        }

        if (media > maiorMedia) {
            maiorMedia = media;
        }
        if (media < menorMedia) {
            menorMedia = media;
        }
    }

    printf("\n");
    printf("Maior nota do primeiro exercicio: %.2f\n", maiorNota[0]);
    printf("Menor nota do primeiro exercicio: %.2f\n", menorNota[0]);
    printf("Maior nota do segundo exercicio: %.2f\n", maiorNota[1]);
    printf("Menor nota do segundo exercicio: %.2f\n", menorNota[1]);
    printf("Maior nota do terceiro exercicio: %.2f\n", maiorNota[2]);
    printf("Menor nota do terceiro exercicio: %.2f\n", menorNota[2]);
    printf("\n");
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}

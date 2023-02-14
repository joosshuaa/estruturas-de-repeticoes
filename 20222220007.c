#include <stdio.h>

#define NUM_EXERCICIO 3
#define NUM_ESTUDANTE 10

int main() {
    int grades[NUM_EXERCICIO][NUM_ESTUDANTE];
    int maxGradeExercise[NUM_EXERCICIO] = {0};
    int minGradeExercise[NUM_EXERCICIO] = {0};
    int maxFinalGrade = 0;
    int minFinalGrade = 0;

    // Input de notas
    for (int i = 0; i < NUM_EXERCICIO; i++) {
        for (int j = 0; j < NUM_ESTUDANTE; j++) {
            printf("Informe a nota do aluno %d no exercicio %d: ", j + 1, i + 1);
            scanf("%d", &grades[i][j]);

            // Verifica maior nota do exercício
            if (grades[i][j] > maxGradeExercise[i]) {
                maxGradeExercise[i] = grades[i][j];
            }

            // Verifica menor nota do exercício
            if (j == 0 || grades[i][j] < minGradeExercise[i]) {
                minGradeExercise[i] = grades[i][j];
            }
        }
    }

    // Calcula médias finais e verifica maior e menor média
    for (int j = 0; j < NUM_ESTUDANTE; j++) {
        int finalGrade = 0;
        for (int i = 0; i < NUM_EXERCICIO; i++) {
            finalGrade += grades[i][j];
        }
        finalGrade /= NUM_EXERCICIO;

        // Verifica maior média final
        if (finalGrade > maxFinalGrade) {
            maxFinalGrade = finalGrade;
        }

        // Verifica menor média final
        if (j == 0 || finalGrade < minFinalGrade) {
            minFinalGrade = finalGrade;
        }
    }

    // Imprime resultados
    printf("Maior nota por exercicio:\n");
    for (int i = 0; i < NUM_EXERCICIO; i++) {
        printf("Exercicio %d: %d\n", i + 1, maxGradeExercise[i]);
    }

    printf("Menor nota por exercicio:\n");
    for (int i = 0; i < NUM_EXERCICIO; i++) {
        printf("Exercício %d: %d\n", i + 1, minGradeExercise[i]);
    }

    printf("Maior media final: %d\n", maxFinalGrade);
    printf("Menor media final: %d\n", minFinalGrade);

    return 0;
}

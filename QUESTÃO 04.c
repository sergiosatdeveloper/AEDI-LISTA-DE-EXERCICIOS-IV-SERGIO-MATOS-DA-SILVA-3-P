#include <stdio.h>

void ordenarNotas(float notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maior = i;
        for (int j = i + 1; j < n; j++) {
            if (notas[j] > notas[maior]) {
                maior = j;
            }
        }

        if (maior != i) {
            float temp = notas[i];
            notas[i] = notas[maior];
            notas[maior] = temp;
        }
    }
}

int main() {
    int numAlunos;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    float notas[numAlunos];

    for (int i = 0; i < numAlunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    ordenarNotas(notas, numAlunos);

    printf("Notas em ordem decrescente:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}

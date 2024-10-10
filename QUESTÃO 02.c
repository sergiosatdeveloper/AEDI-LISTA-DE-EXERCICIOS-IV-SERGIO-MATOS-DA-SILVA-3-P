#include <stdio.h>

void mostrarPares(int num) {
    printf("Números pares entre 1 e %d:\n", num);
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    mostrarPares(num);

    return 0;
}

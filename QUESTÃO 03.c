#include <stdio.h>

void ordenarPrecos(float precos[], int n) {
    for (int i = 1; i < n; i++) {
        float atual = precos[i];
        int j = i - 1;

        while (j >= 0 && precos[j] > atual) {
            precos[j + 1] = precos[j];
            j--;
        }
        precos[j + 1] = atual;
    }
}

int main() {
    int quantidade;

    printf("Quantos produtos? ");
    scanf("%d", &quantidade);

    float precos[quantidade];
    
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o preço %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    ordenarPrecos(precos, quantidade);

    printf("Preços ordenados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");

    return 0;
}

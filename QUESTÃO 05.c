#include <stdio.h>

void ordenar(int lista[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (lista[i] > lista[j]) {
                int temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

int buscaBinaria(int lista[], int tam, int chave) {
    int inicio = 0, fim = tam - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (lista[meio] == chave) {
            return meio;
        } else if (lista[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int n, valor;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    int numeros[n];
    
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    ordenar(numeros, n);

    printf("Informe o valor a buscar: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(numeros, n, valor);

    if (resultado != -1) {
        printf("Valor encontrado na posição %d\n", resultado);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}

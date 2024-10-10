#include <stdio.h>

int main() {
    int idade;
    
    printf("Informe a idade: ");
    scanf("%d", &idade);

    int faixa_etaria = (idade < 18) ? 1 : (idade <= 65) ? 2 : 3;

    switch (faixa_etaria) {
        case 1:
            printf("Menor de idade\n");
            break;
        case 2:
            printf("Maior de idade\n");
            break;
        case 3:
            printf("Idoso\n");
            break;
        default:
            printf("Idade inválida\n");
    }

    return 0;
}

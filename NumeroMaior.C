#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i;
    float numero, maior = -999999;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero digitado foi: %.2f\n", maior);

    return 0;
}
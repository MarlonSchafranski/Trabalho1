#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{   
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0){
        printf("O numero é positivo");
    }

    else if (numero > 0){
        printf("o numero é negativo");
    }

    else {
        printf("O numero é zero");
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {
    int regiao, qtd;
    float preco = 5.0, total, frete;
    

    printf("Informe a regiao de entrega (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);
    

    printf("Informe a quantidade de itens (maximo 100): ");
    scanf("%d", &qtd);
    

    total = preco * qtd;
    

    switch (regiao) {
        case 1:
            frete = total * 0.1;
            break;
        case 2:
            frete = total * 0.08;
            break;
        case 3:
            frete = total * 0.12;
            break;
        case 4:
            frete = total * 0.15;
            break;
        case 5:
            frete = total * 0.11;
            break;
        default:
            printf("Regiao invalida.\n");
            return 0;
    }
 
    printf("Total sem frete: R$%.2f\n", total);
    printf("Frete: R$%.2f\n", frete);
    printf("Total a pagar: R$%.2f\n", total + frete);
    printf("Regiao de entrega: %d\n", regiao);
    
    return 0;
}
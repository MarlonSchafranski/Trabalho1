#include <stdio.h>
#include <stdlib.h>

int main() {
    char situacao[20];
    int idade, qtdFilhos, idadeFilho;
    char sexo, nomeConjuge[20], cidade[20];
    float salario;

    printf("Digite sua situacao civil: ");
    scanf("%s", situacao);

    if (strcmp(situacao, "Solteiro") == 0) {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Situacao civil: %s, Idade: %d\n", situacao, idade);
    }
    else if (strcmp(situacao, "Casado") == 0) {
        printf("Digite o sexo do conjuge (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o nome do conjuge: ");
        scanf("%s", nomeConjuge);
        printf("Situacao civil: %s, Sexo do conjuge: %c, Nome do conjuge: %s\n", situacao, sexo, nomeConjuge);
    }
    else if (strcmp(situacao, "Divorciado") == 0) {
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &qtdFilhos);
        printf("Digite a idade do filho mais velho: ");
        scanf("%d", &idadeFilho);
        printf("Situacao civil: %s, Quantidade de filhos: %d, Idade do filho mais velho: %d\n", situacao, qtdFilhos, idadeFilho);
    }
    else if (strcmp(situacao, "Viuvo") == 0) {
        printf("Digite a cidade onde vive: ");
        scanf("%s", cidade);
        printf("Digite o salario atual: ");
        scanf("%f", &salario);
        printf("Situacao civil: %s, Cidade onde vive: %s, Salario atual: %.2f\n", situacao, cidade, salario);
    }
    else {
        printf("Situacao civil invalida.\n");
    }
    return 0;
}
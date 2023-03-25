#include<stdio.h>
#include<stdlib.h>

int main() {
    int anos = 0;
    float popA = 90000, popB = 50000;

    while (popB <= popA) {
        popA *= 1.009;
        popB *= 1.015;
        anos++;
    }

    printf("A cidade B ultrapassara a cidade A em populacao em %d anos.\n", anos);

    return 0;
}
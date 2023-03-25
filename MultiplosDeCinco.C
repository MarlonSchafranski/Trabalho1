#include<stdio.h>
#include<stdlib.h>

int main() {
    int i;
    
    printf("Multiplos de 5 no intervalo de 1 ate 500:\n");
    
    for(i=1; i<=500; i++) {
        if(i%5==0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
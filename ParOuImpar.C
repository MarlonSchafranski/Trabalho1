#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;
    printf("digite umm nro: ");
    scanf("%d", &numero);

    if (numero %2 == 0)
    {
        printf("%d o numro é par:");
    }
    else 
    {
        printf("O numero é imopar");
    }
    
    
    return 0;
}
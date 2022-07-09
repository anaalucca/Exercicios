#include <stdio.h>

int main (void)
{
    int numero1, numero2;
    
    printf("Digite dois numeros inteiros:\n");
    scanf("%i\n", &numero1);
    scanf("%i", &numero2);
    
    if (numero1 % numero2 == 0 || numero2 % numero1 == 0)
    {
        printf("Sao multiplos\n");
    }
    else {
        printf("Nao sao multiplos\n");
    }
    

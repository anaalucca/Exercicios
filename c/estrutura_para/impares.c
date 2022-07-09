#include <stdio.h>

int main(void)
{
    int x, y, soma, troca;
    
    printf("Digite dois numeros:\n");
    scanf("%i %i", &x, &y);
    
    if (x > y)
    {
        troca = x;
        x = y;
        y = troca;
    }
    
    soma = 0;
    
    for (int i = x+1; i < y; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
    }
    
    printf("SOMA DOS IMPARES = %i\n", soma);
    
}

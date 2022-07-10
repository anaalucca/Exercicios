#include <stdio.h>

int main(void)
{
    int N, i, fatorial; 
    
    printf("Digite o valor de N: ");
    scanf("%i", &N);
    
    fatorial = 1;
    
    for (i = N; i > 0; i--)
    {
        fatorial = fatorial * i;
    }
    
    printf("FATORIAL = %i\n", fatorial);
    
}

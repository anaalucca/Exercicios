#include <stdio.h>

int main(void)
{
    int N, x, i;
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &N);
    
    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        
        if (x == 0)
        {
             printf("NULO\n");
        }
        else {
            if (x % 2 == 0)
            {
            printf("PAR");
            }
            else {
                printf("IMPAR");
            }
            
            if (x > 0)
            {
                printf(" POSITIVO\n");
            }
            else {
                printf(" NEGATIVO\n");
            }
        }
    }
    
}

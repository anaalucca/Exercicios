#include <stdio.h>

int main(void)
{
    int N, i, x, y;
    double divisao;
    
    printf("Quantos casos voce vai digitar? ");
    scanf("%i", &N);
    
    for (i = 0; i < N; i++)
    {
        printf("Entre com o numerador: ");
        scanf("%i", &x);
        
        printf("Entre com o denominador: ");
        scanf("%i", &y);
        
        if (y == 0)
        {
            printf("DIVISAO IMPOSSIVEL\n");
        }
        else {
            divisao = (double) x / y;
            printf("DIVISAO = %.2lf\n", divisao);
        }
    }
}

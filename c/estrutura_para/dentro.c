#include <stdio.h>

int main(void)
{
    int N, x, i, fora, dentro; 
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &N);
    
    fora = 0;
    dentro = 0;
    
    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%i", &x);
        
        if (x < 10 || x > 20)
        {
            fora++;
        }
        else {
            dentro++;
        }
    }
    
    printf("%i DENTRO\n", dentro);
    printf("%i FORA\n", fora);
    
}

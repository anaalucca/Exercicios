#include <stdio.h>

int main(void)
{
    int N, i; 
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &N);
    
    double vet[N];
    
    for (i = 0; i < N; i++)
    {
        printf("Digite um numero:");
        scanf("%lf", &vet[i]);
    }
    
    printf("\nVALORES: ");
    
    for (i = 0; i < N; i++)
    {
        printf("%.1lf ", vet[i]);
    }
    
    printf("\n");
    
    double soma, media;
    
    soma = 0;
    for (i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }
    
    printf("SOMA = %.2lf\n", soma);
    
    media = soma / N;
    
    printf("MEDIA = %.2lf\n", media);
    
}

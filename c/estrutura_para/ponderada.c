#include <stdio.h>

int main(void)
{
    int N, i;
    double teste1, teste2, teste3, media;
    
    printf("Quantos casos voce vai digitar? ");
    scanf("%i", &N);
    
    for (i = 0; i < N; i++)
    {
        printf("Digite tres numeros:\n");
        scanf("%lf", &teste1);
        scanf("%lf", &teste2);
        scanf("%lf", &teste3);
        
        media = (teste1 * 2 + teste2 * 3 + teste3 * 5) / 10;
        printf("MEDIA = %.1lf\n", media);
    }
    
}

#include <stdio.h>

int main(void)
{
    double glicose; 
    
    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);
    
    
    if (glicose <= 100)
    {
        printf("Classificacao: normal\n");
    }
    else if (glicose > 140)
    {
        printf("Classificação: diabetes\n");
    }
    else {
        printf("Classificação: elevado\n");
    }
    
}

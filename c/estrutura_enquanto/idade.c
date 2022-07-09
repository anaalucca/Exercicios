#include <stdio.h>

int main(void)
{
    int idade, cont, soma;
    double media;
    
    printf("Digite as idades:\n");
    scanf("%i", &idade);
    
    soma = 0;
    cont = 0;
    
    while (idade >= 0)
    {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%i", &idade);
    }
    
    if (cont == 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }
    else {
        media = (double) soma / cont;
        printf("MEDIA = %.2lf\n", media);
    }
    
}

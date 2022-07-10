#include <stdio.h>

int main(void)
{
    int cod, cod1, cod2, cod3;
    
    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%i", &cod);
    
    cod1 = 0;
    cod2 = 0;
    cod3 = 0;
    
    while (cod != 4)
    {
        if (cod == 1)
        {
            cod1++;
        }
        else if (cod == 2)
        {
            cod2++;
        }
        else if (cod == 3)
        {
            cod3++;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%i", &cod);
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", cod1);
    printf("Gasolina: %i\n", cod2);
    printf("Diesel: %i\n", cod3);
    
}

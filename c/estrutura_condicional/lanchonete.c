#include <stdio.h>

int main(void)
{
    int codigo, quantidade;
    
    printf("Codigo do produto comprado: ");
    scanf("%i", &codigo);
    
    printf("Quantidade comprada: ");
    scanf("%i", &quantidade);
    
    double pagar;
    
    if (codigo == 1)
    {
        pagar = quantidade * 5.0;
    }
    else if (codigo == 2)
    {
        pagar = quantidade * 3.5;
    }
    else if (codigo == 3)
    {
        pagar = quantidade * 4.8;
    }
    else if (codigo == 4)
    {
        pagar = quantidade * 8.9;
    }
    else {
        pagar = quantidade * 7.32;
    }
    
    printf("Valor a pagar: %.2lf\n", pagar);
    
}

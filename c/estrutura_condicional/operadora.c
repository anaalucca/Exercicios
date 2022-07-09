#include <stdio.h>

int main(void)
{
    int minutos; 
    
    printf("Digite a quantidade de minutos: ");
    scanf("%i", &minutos);
    
    double valor1, valor2;
    
    if (minutos > 100)
    {
        valor1 = ((minutos - 100) * 2.0) + 50.0;
        printf("Valor a pagar = %.2lf\n", valor1);
    }
    else {
        valor2 = 50.00;
        printf("Valor a pagar = %.2lf\n", valor2);
    }
    
}

#include <stdio.h>

int main(void)
{
    int distancia;
    double combustivel;
    
    printf("Distancia percorrida: ");
    scanf("%i", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel);
    
    double consumo;
    
    consumo = distancia / combustivel;
    
    printf("Consumo medio = %.3lf\n", consumo);
    
}

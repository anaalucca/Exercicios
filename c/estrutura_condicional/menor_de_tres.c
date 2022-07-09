#include <stdio.h>
#include <math.h>

int main(void)
{
    int valor1, valor2, valor3, menor; 
    
    printf("Primeiro valor: ");
    scanf("%i", &valor1);
    printf("Segundo valor: ");
    scanf("%i", &valor2);
    printf("Terceiro valor: ");
    scanf("%i", &valor3);
    
    if (valor1 < valor2 && valor1 < valor3)
    {
        menor = valor1;
    }
    
    else if (valor2 < valor3)
    {
        menor = valor2;
    }
    
    else {
        menor = valor3;
    }
    
    printf("Menor = %i\n", menor);
    
}

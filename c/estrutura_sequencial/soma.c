#include <stdio.h>

int main(void)
{
    int X, Y;
    
    printf("Digite o valor de X: ");
    scanf("%i", &X);
    printf("Digite o valor de Y: ");
    scanf("%i", &Y); 
    
    int soma;
    
    soma = X + Y;
    
    printf("SOMA = %i\n", soma);
    
}

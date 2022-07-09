#include <stdio.h>

int main(void)
{
    char escala;
    
    printf("Voce vai digitar a tempratura em qual escala (C/F? ");
    scanf("%c", &escala);
    
    double celsius, fahrenheit; 
    
    if (escala == 'F')
    {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        
        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
    }
    else {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);
        
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahrenheit);
    }
    
}

#include <stdio.h>
#include <math.h>

int main(void)
{
    double base, altura, area, perimetro, diagonal;
    
    printf ("Base do retangulo: ");
    scanf("%lf", &base);
    
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);
    
    area = base * altura;
    perimetro = (base + altura) * 2.0;
    diagonal = sqrt (pow(base, 2.0) + pow(altura, 2.0));
    
    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);
}

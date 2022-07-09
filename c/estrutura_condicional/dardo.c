#include <stdio.h>

int main(void)
{
    double distancia1, distancia2, distancia3;
    
    printf("Digite as tres distancias:\n");
    scanf ("%lf\n", &distancia1);
    scanf ("%lf\n", &distancia2);
    scanf ("%lf", &distancia3);
    
    if (distancia1 > distancia2 && distancia1 > distancia3)
    {
        printf("MAIOR DISTANCIA = %.2lf\n", distancia1);
    }
    else if (distancia2 > distancia1 && distancia2 > distancia3)
    {
        printf("MAIOR DISTANCIA = %.2lf\n", distancia2);
    }
    else {
        printf("MAIOR DISTANCIA = %.2lf\n", distancia3);
    }
}

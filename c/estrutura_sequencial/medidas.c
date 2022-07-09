#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B, C; 
    
    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);
    
    double area1, area2, area3; 
    
    area1 = A * A;
    area2 = (A * B) / 2.0;
    area3 = (A + B) * C / 2.0;
    
    printf("AREA DO QUADRADO = %.4lf\n", area1);
    printf("AREA DO TRIANGULO = %.4lf\n", area2);
    printf("AREA DO TRAPEZIO = %.4lf\n", area3);
    
}

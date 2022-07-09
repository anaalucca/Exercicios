#include <stdio.h>
#include <math.h>

int main(void)
{
    double r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    double area;

    area = 3.14159 * (pow(r, 2.0));

    printf("AREA = %.3lf\n", area);

}

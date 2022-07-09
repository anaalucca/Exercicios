#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, delta, raiz1, raiz2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4.0 * a * c;

    if (a == 0 || delta < 0)
    {
        printf("Esta equacao nao possui raizes reais\n");
    }

    else {
        raiz1 = (- b + sqrt (delta)) / (2.0 * a);
        raiz2 = (- b - sqrt (delta)) / (2.0 * a);
        printf("X1 = %.4lf\n", raiz1);
        printf("X2 = %.4lf\n", raiz2);
    }

}

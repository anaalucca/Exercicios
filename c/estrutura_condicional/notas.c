#include <stdio.h>

int main(void)
{
    double nota1, nota2, final;
    
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    
    final = nota1 + nota2;
    
    printf("NOTA FINAL = %.1lf\n", final);
    
    if (final < 60.00)
    {
        printf("REPROVADO\n");
    }
}

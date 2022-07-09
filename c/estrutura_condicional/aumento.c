#include <stdio.h>

int main(void)
{
    double salario;
    
    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);
    
    int porcentagem;
    double novo, aumento;
    
    if (salario <= 1000.0)
    {
       porcentagem = 20;
       aumento = (salario * porcentagem) / 100;
       novo = salario + aumento;
    }
    else if (salario > 1000.0 && salario <= 3000.0)
    {
        porcentagem = 15;
        aumento = (salario * porcentagem) / 100;
        novo = salario + aumento;
    }
     else if (salario > 3000.0 && salario <= 8000.0)
    {
        porcentagem = 10;
        aumento = (salario * porcentagem) / 100;
        novo = salario + aumento;
    }
    else {
        porcentagem = 5;
        aumento = (salario * porcentagem) / 100;
        novo = salario + aumento;
    }
    
    printf("Novo salario = %.2lf\n", novo);
    printf("Aumento = %.2lf\n", aumento);
    printf("Porcentagem = %i %%\n", porcentagem);

}

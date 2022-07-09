#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) 
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
} 

int main(void)
{
    int horas;
    double valor;
    char nome[50];
    
    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%i", &horas);
    
    double pagamento;
    
    pagamento = valor * horas;
    
    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);
    
}

#include <stdio.h>
#include <string.h>

void limpar_entrada() 
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) 
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
} 


int main(void)
{
    int idade1, idade2;
    double media;
    char nome1[50], nome2 [50];
    
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%i", &idade1);
    
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%i", &idade2);
    
    media = (idade1 + idade2) / 2.0;
    
    printf("A idade média de %s e %s é de %.1lf", nome1, nome2, media);
    
} 

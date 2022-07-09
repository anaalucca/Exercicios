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
    int N, i;
    
    printf("Quantas pessoas serao digitadas? ");
    scanf("%i", &N);
    
    char nomes[N][50];
    int idades[N];
    double alturas[N];
    
    for (i = 0; i < N; i++)
    {
        printf("Dados da %ia pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%i", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    
    double soma, media, percentual;
    int menores;
   
    soma = 0;
    for (i = 0; i < N; i++)
    {
        soma = soma + alturas[i];
    }
    
    media = soma / N;
    
    printf("\nAltura media: %.2lf\n", media);
    
    menores = 0;
    for (i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            menores++;
        }
    }
    
    percentual = menores * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentual);
    
    for (i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }
}

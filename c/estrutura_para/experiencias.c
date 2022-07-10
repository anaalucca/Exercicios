#include <stdio.h>

int main(void)
{
    int N, i, cobaias, ratos, sapos, coelhos, total;
    char tipo;
    double pratos, psapos, pcoelhos;
    
    printf("Quantos casos de teste serao digitados? ");
    scanf("%i", &N);
    
    ratos = 0;
    sapos = 0;
    coelhos = 0;
    
    for (i = 0; i < N; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%i", &cobaias);
        
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);
        
        if (tipo == 'R')
        {
            ratos = ratos + cobaias;
        }
        else if (tipo == 'S')
        {
            sapos = sapos + cobaias;
        }
        else {
            coelhos = coelhos + cobaias;
        }
    }
    
    total = ratos + sapos + coelhos;
    pcoelhos = ((double) coelhos / total) * 100.0;
    pratos = ((double) ratos / total) * 100.0;
    psapos = ((double) sapos / total) * 100.0;
    
    printf("\nRELATORIO FINAL:\n");
	printf("Total: %i cobaias\n", total);
	printf("Total de coelhos: %i\n", coelhos);
	printf("Total de ratos: %i\n", ratos);
	printf("Total de sapos: %i\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", pcoelhos);
    printf("Percentual de ratos: %.2lf\n", pratos);
    printf("Percentual de sapos: %.2lf\n", psapos);
    
}

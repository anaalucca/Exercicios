#include <stdio.h>

int main(void)
{
    int M, N, i, j; 
    
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%i", &M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%i", &N);
    
    double mat[M][N];
    
    for (i = 0; i < M; i++)
    {
        printf("Digite os elementos da %ia linha:\n", i + 1);
        for (j = 0; j < N; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }
    
    double vet [M];
    
    for (i = 0; i < M; i++)
    {
        vet[i] = 0; 
        
        for (j = 0; j < N; j++)
        {
            vet[i] = vet[i] + mat[i][j];
        }
    }
        printf("VETOR GERADO:\n");
    
    for (i = 0; i < M; i++)
    {
        printf("%.1lf\n", vet[i]);
    }
}

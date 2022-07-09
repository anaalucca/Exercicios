#include <stdio.h>

int main(void)
{
    int N, i, j;
    
    printf("Qual a ordem da matriz? ");
    scanf("%i", &N);
    
    int mat[N][N];
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
    
    printf("\nDIAGONAL PRINCIPAL:\n");
    
    for (i = 0; i < N; i++)
    {
        printf("%i ", mat[i][i]);
    }
    
    int negativos;
    
    negativos = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)
            {
                negativos++;
            }
        }
    }
    
    printf("\nQUANTIDADE DE NEGATIVOS = %i\n", negativos);
}

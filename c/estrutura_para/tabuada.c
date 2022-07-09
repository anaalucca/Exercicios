#include <stdio.h>

int main(void)
{
    int N, i, produto;
    
    printf("Deseja a tabuada para qual valor? ");
    scanf("%i", &N);
    
    for (i = 1; i <= 10; i++)
    {
        produto = N * i;
        
        printf("%i x %i = %i\n", N, i, produto);
    }
    
}

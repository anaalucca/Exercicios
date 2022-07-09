#include <stdio.h>

int main(void)
{
    int x, y;
    
    printf("Digite dois numeros:\n");
    scanf("%i", &x);
    scanf("%i", &y);
    
    while (x != y)
    {
        if (x < y)
        {
            printf("CRESCENTE\n");
        }
        else {
            printf("DECRESCENTE\n");
        }
    }
    
    printf("Digite outros dois numeros:\n");
    scanf("%i", &x);
    scanf("%i", &y);
    
}

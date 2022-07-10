#include <stdio.h>

int main(void)
{
    int x, soma;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    while (x != 0) 
    {
        if (x % 2 != 0) 
        {
            x++;
        }

        soma = 5 * x + 20;
        printf("SOMA = %i\n", soma);

        printf("Digite um numero inteiro: ");
		scanf("%i", &x);
    }
}

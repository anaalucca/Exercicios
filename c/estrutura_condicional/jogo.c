#include <stdio.h>

int main(void)
{
    int inicial, final;

    printf("Hora inicial: ");
    scanf("%d", &inicial);

    printf("Hora final: ");
    scanf("%d", &final);

    if (inicial < final) 
    {
        printf("O JOGO DUROU %d HORA(S)\n", final - inicial);
    }
    else {
		printf("O JOGO DUROU %d HORA(S)\n", 24 - (inicial - final));
    }
}

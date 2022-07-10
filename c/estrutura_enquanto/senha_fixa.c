#include <stdio.h>

int main(void)
{
    int x; 
    
    printf("Digite a senha: ");
    scanf("%i", &x);
    
    while (x != 2002)
    {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%i", &x);
    }
    
    if (x == 2002)
    {
        printf("Acesso permitido!\n");
    }

}

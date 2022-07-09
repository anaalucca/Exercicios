#include <stdio.h>

int main(void)
{
    int duracao;
    
    printf("Digite a duracao em segundos: ");
    scanf("%i", &duracao);
    
    int horas, minutos, segundos, resto; 
    
    horas = duracao / 3600;
    resto = duracao % 3600;
    
    minutos = resto / 60;
    segundos = resto % 60;
    
    printf("%i:%i:%i\n", horas, minutos, segundos);
    
}

#include <stdio.h>
int main(void)
{
    int quantidade;
    double preco, dinheiro;
    
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%i", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    
    double troco, falta; 
    
    falta = (preco * quantidade) - dinheiro;
    
    if (falta > 0.0)
    {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
    }
    else {
        troco = dinheiro - (preco * quantidade);
        printf("TROCO = %.2lf\n", troco);
    }
    
}

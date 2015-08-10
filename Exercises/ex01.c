#include<stdio.h>

int main(void)
{
    float preco,desconto,totalliq;
    int quantidade;

    printf("\nInforme [Preço Quantidade Desconto]:");
    scanf("%f %d %f", &preco, &quantidade, &desconto);
    printf("\n Total Bruto: $ %.2f ", preco*quantidade);
    printf("\n Desconto: $ %.2f", (preco*quantidade)*desconto/100);
    totalliq = (preco*quantidade)-(preco*quantidade*desconto/100);
    printf("\n Total Liquido: $ %.2f \n",totalliq);

    return 0;
}

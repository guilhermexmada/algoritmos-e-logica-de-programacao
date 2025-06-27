#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod1, cod2, qtd1, qtd2;
    float ipi, val1, val2, total;
    printf("Informe o codigo da peca 1: ");
    scanf("%i", &cod1);
    printf("Informe o valor unitario da peca 1: ");
    scanf("%f", &val1);
    printf("Informe a quantidade de pecas 1: ");
    scanf("%i", &qtd1);
    printf("Informe o codigo da peca 2: ");
    scanf("%i", &cod2);
    printf("Informe o valor unitario da peca 2: ");
    scanf("%f",&val2);
    printf("Informe a quantidade de pecas 2: ");
    scanf("%i", &qtd2);
    printf("Informe o valor do IPI mais atual: ");
    scanf("%f",&ipi);
    total = ((val1 * qtd1) + (val2 * qtd2)) * ((ipi/100)+1);
    printf("Total a ser pago: R$ %f ,00", total);
    return 0;
}

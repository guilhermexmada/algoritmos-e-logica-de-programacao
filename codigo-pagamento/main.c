#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod_pag;
    float preco, preco_total;
    printf("--- Calculo de total a ser pago ---\n");
    printf("Insira o preco de etiqueta do produto: ");
    scanf("%f",&preco);
    printf("Insira o codigo da condicao de pagamento: ");
    scanf("%i",&cod_pag);
    switch(cod_pag){
    case 1:
        preco_total = preco - (preco * 0.1);
        break;
    case 2:
        preco_total = preco - (preco * 0.05);
        break;
    case 3:
        preco_total = preco * 2;
        break;
    case 4:
        preco_total = preco * 3 + (preco * 0.1);
        break;
    default:
        printf("Codigo invalido. Tente novamente.");
        break;
    }

    if(cod_pag >= 1 && cod_pag <= 4){
        printf("R$ %f,00 a ser pago", preco_total);
    } else{
        printf("");
    }

    return 0;
}

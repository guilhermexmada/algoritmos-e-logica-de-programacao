#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km_inicial, km_final, consumo, distancia, gasto;
    printf("Qual foi a quilometragem inicial da sua viagem? ");
    scanf("%f",&km_inicial);
    printf("Qual foi a quilometragem final da sua viagem? ");
    scanf("%f",&km_final);
    printf("Quantos litros de combustivel voce consumiu? ");
    scanf("%f", &consumo);
    distancia = km_final - km_inicial;
    gasto = distancia / consumo;
    printf("Cada litro de combustivel rendeu %f quilometros", gasto);
    return 0;
}

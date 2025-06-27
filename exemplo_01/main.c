#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt_tanque;
    float raio_tanque;
    float area_tanque;
    int qtd_latas;
    float val_latas;

    printf("Indique a altura (cm) do tanque cilíndrico de combustível: ");
    scanf("%f", &alt_tanque);
    printf("Indique o raio (cm) do tanque cilíndrico de combustível: ");
    scanf("%f", &raio_tanque);
    area_tanque = raio_tanque * 3.14 * 2 * (raio_tanque + alt_tanque) ;
    printf("%f", area_tanque);
    qtd_latas = (area_tanque/3)/5;
    val_latas = qtd_latas*20;
    printf("Área superficial do tanque: %f  m² \n"  ,area_tanque);
    printf("Latas de tinta necessárias: %i \n"  ,qtd_latas);
    printf("Valor total das latas: R$ %f ,00 \n" ,val_latas);

    return 0;
}

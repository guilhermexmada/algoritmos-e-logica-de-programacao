#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comp, lar, alt, vol;
    printf("Qual o comprimento da caixa em cm?\n");
    scanf("%f", &comp);
    printf("Qual a largura da caixa em cm?\n");
    scanf("%f", &lar);
    printf("Qual a altura da caixa em cm? \n");
    scanf("%f", &alt);
    vol = comp * lar * alt;
    printf("Sua caixa tem %f cm cubicos", vol);
}

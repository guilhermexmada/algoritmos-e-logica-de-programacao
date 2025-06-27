#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos, meses, dias, resultado;
    printf("Digite quantos anos voce tem: ");
    scanf("%i" , &anos);
    printf("Digite quantos meses voce tem: ");
    scanf("%i", &meses);
    printf("Digite quantos dias voce tem: ");
    scanf("%i", &dias);
    resultado = (anos*365) + (meses*30) + dias;
    printf("Voce tem aproximadamente %i dias de vida", resultado);
    return 0;
}

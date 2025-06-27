#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, raio, vol;
    printf("Qual a medida do raio do cilindro em cm? \n");
    scanf("%f", &raio);
    printf("Qual a medida da altura do cilindro em cm? ");
    scanf("%f", &alt);
    vol = (3.14 * raio * raio) * alt ;
    printf("O cilindro tem %f cm cubicos" , vol);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, sal_min;
    printf("Digite o valor do seu salario em R$: \n");
    scanf("%f", &sal);
    sal_min = sal / 1320;
    printf("Voce ganha o equivalente a %f salarios minimos", sal_min);
    return 0;
}

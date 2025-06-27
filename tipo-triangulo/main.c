#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ld1, ld2, ld3;
    printf("Vamos classificar um triangulo quanto a medida dos lados: \n");
    printf("Qual o valor do primeiro lado? ");
    scanf("%i",&ld1);
    printf("Qual o valor do segundo lado? ");
    scanf("%i",&ld2);
    printf("Qual o valor do terceiro lado? ");
    scanf("%i",&ld3);
    if(ld1 == ld2 && ld1 == ld3){
        printf("O triangulo e equilatero!");
    } else{
        if((ld1 == ld2 && ld2 != ld3) || (ld2 == ld3 && ld3 != ld1) || (ld1 == ld3 && ld3 != ld2)){
        printf("O triangulo e isoceles!");
        } else {
            printf("O triangulo e escaleno!");
        }
    }

    return 0;
}

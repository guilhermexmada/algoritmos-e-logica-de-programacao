#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, mf;
    printf("Calculo da media final em Programacao. \n");
    printf("Nota Avaliacao 1:");
    scanf("%f", &n1 );
    printf("Nota Avaliacao 2:");
    scanf("%f", &n2);
    mf = ( n1 + n2 ) / 2;
    printf("Media final: %f \n" , mf);
    if(mf >= 7){
        printf("Aprovado!");
    } else{
        printf("Reprovado.");
    }
    return 0;
}

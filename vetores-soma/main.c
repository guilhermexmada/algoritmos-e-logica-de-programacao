#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variaveis
    int v1[5], v2[5], soma[5];
    int i;

    //entrada de dados v1
    for(i=0;i<5;i++){
        printf("Usuario A, digite o valor: ");
        scanf("%i", &v1[i]);
    }
    //entrada de dados v2
    for(i=0;i<5;i++){
        printf("Usuario B, digite o valor: ");
        scanf("%i", &v2[i]);
    }
    //somatoria dos vetores e saida de dados
    for(i=0; i<5; i++){
        soma[i] = v1[i] + v2[i];
        printf("A soma da posicao %d eh %d \n", i, soma[i]);
    }

    return 0;
}

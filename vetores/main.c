#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, p, maior;
    int vetor[10];
    for(i = 0; i<10; i++){
        printf("Digite o proximo valor: ", setlocale(LC_ALL,"Portuguese"));
        scanf("%i", &vetor[i]);
    }

    for(p = 0; p<10; p++){
        if(vetor[p] > maior){
            maior = vetor[p];
        }
    }

    //se n�o usar 2 for, � preciso inicializar a vari�vel "maior" com zero porque se colocar a verifica��o e a atribui��o dentro do mesmo loop, ele n�o vai saber qual o valor de compara��o do maior, gerando um resultado errado
    printf("%i � o maior n�mero", maior, setlocale(LC_ALL,"Portuguese"));

    return 0;
}

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

    //se não usar 2 for, é preciso inicializar a variável "maior" com zero porque se colocar a verificação e a atribuição dentro do mesmo loop, ele não vai saber qual o valor de comparação do maior, gerando um resultado errado
    printf("%i é o maior número", maior, setlocale(LC_ALL,"Portuguese"));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pag;
    int he, me, hs, ms, ht, mt, cheia;
    printf("--- Calculo do valor de estacionamento ---\n");
    printf("Digite a hora de entrada: ");
    scanf("%i",&he);
    printf("Digite o minuto de entrada: ");
    scanf("%i", &me);
    printf("Digite a hora de saida: ");
    scanf("%i",&hs);
    printf("Digite o minuto de saida: ");
    scanf("%i",&ms);
    mt = ms - me;
    ht = hs - he;
    if(mt > 0){
        cheia = 1;
    } else{
        cheia = 0;
    }

    if(ht == 1 || ht == 0){
        pag = 4 + cheia;
    } else {
        if(ht == 2){
            pag = 6 + cheia;
        } else {
            if(ht > 2){
                pag = 6 + ( ht - 2 ) + cheia ;
            }
        }
    }
    printf("R$ %f a ser pago", pag);
    return 0;
}

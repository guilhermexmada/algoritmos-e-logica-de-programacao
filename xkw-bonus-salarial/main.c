#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos_trabalho;
    float salario_atual;
    float salario_novo;
    printf("Para saber seu bonus salarial, responda: \n");
    printf("Ha quantos anos completos voce trabalha na empresa XKW? ");
    scanf("%i",&anos_trabalho);
    printf("Qual o seu salario atual? ");
    scanf("%f",&salario_atual);
    if(anos_trabalho >= 5){
        salario_novo = salario_atual + ((salario_atual/100)*20);
    } else{
        salario_novo = salario_atual +((salario_atual/100)*10);
    }
    printf("Seu novo salario sera de R$ %f,00", salario_novo);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float emp, sal;
    int num_parc;
    printf("Para avaliarmos seu emprestimo, responda: \n");
    printf("Valor do emprestimo: ");
    scanf("%f",&emp);
    printf("Numero de parcelas: ");
    scanf("%i",&num_parc);
    printf("Salario atual: ");
    scanf("%f", &sal);
    if((num_parc*emp) <= ((sal/100)*30)){
        printf("Emprestimo aprovado!");
    } else{
        printf("Emprestimo reprovado.");
    }

    return 0;
}

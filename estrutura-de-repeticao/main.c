#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, res;
    int i,op;
    do{
    printf("Informe a operacao \n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    printf("0 - SAIR\n");
    scanf("%i", &op);

    if(op == 0){
        printf("Saiu.");
    } else{
        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);
    }
     switch(op){
        case 1:
            res = n1 + n2;
            printf("Resultado = %f \n", res);
            break;
        case 2:
            res = n1 - n2;
            printf("Resultado = %f \n", res);
            break;
        case 3:
            res = n1 * n2;
            printf("Resultado = %f \n", res);
            break;
        case 4:
            res = n1 / n2;
            printf("Resultado = %f \n", res);
            break;
        default:
            printf("Operacao nao reconhecida");
    }

    }while(op != 0);

    return 0;
}

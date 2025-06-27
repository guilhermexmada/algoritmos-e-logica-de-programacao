#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    printf("Indique um codigo de 1-10: \n");
    scanf("%i", &cod);
    switch(cod){
    case 1:
        printf("Alimento nao-perecivel");
        break;
    case 2:
        printf("Alimento perecivel");
        break;
    case 3:
        printf("Alimento perecivel");
        break;
    case 4:
        printf("Alimento perecivel");
        break;
    case 5:
        printf("Vestuario");
        break;
    case 6:
        printf("Vestuario");
        break;
    case 7:
        printf("Higiene pessoal");
        break;
    case 8:
        printf("Utensilios domesticos");
        break;
    case 9:
        printf("Utensilios domesticos");
        break;
    case 10:
        printf("Utensilios domesticos");
        break;
    default:
        printf("Codigo invalido. Tente novamente.");
        break;
    }
    return 0;
}

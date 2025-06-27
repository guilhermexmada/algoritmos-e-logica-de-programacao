#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sucessor;
    int antecessor;

    printf("Digite um numero inteiro: \n");
    scanf("%i" , &num);
    sucessor = num + 1;
    antecessor = num - 1;
    printf("Seu antecessor = %d \n" , antecessor);
    printf("Seu sucessor = %d" , sucessor);
    return 0;
}

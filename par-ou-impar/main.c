#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero inteiro qualquer: ");
    scanf("%i",&num);
    if(num%2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
    return 0;
}

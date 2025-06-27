#include <stdio.h>
#include <stdlib.h>

int main()
{   int idade;
    printf("Digite sua idade: ");
    scanf("%int", &idade);
    if(idade >= 18){
        printf("Maior de idade");
    } else{
        printf("Menor de idade");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%i",&n1);
    printf("Digite outro numero: ");
    scanf("%i",&n2);
    if(n1 == n2){
        printf("Os numeros nao podem ser iguais. Tente novamente.");
    } else{
        printf("Digite mais um numero: ");
        scanf("%i", &n3);
        if(n2 == n3 || n3 == n1){
            printf("Os numeros nao podem ser iguais. Tente novamente.");
        } else{
            if(n1>n2 && n1>n3){
                printf("%i e o maior entre os 3.",n1);
            }
            if(n2>n1 && n2>n3){
                printf("%i e o maior entre os 3.", n2);
            }
            if(n3>n1 && n3>n2){
                printf("%i e o maior entre os 3", n3);
            }
        }
    }
    return 0;
}

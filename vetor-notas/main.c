#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float media = 0;
    float notas[4];
    int i;
    for(i=0;i<4;i++){
        printf("Digite a %i� nota: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    printf("M�dia final: %f", media/4);

    return 0;
}

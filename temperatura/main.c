#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("Digite uma temperatura em Fahrenheit: \n");
    scanf("%f" , &f);
    c = ((f - 32) * 0.55555555555);
    printf("%f F = %f graus C", f, c);
    return 0;
}

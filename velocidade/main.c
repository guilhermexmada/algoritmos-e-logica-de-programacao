#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vel_kmh;
    float vel_ms;
    printf("Digite uma velocidade em km/h: \n");
    scanf("%d", &vel_kmh);
    vel_ms = vel_kmh * 0.62;
    printf("%d km/h = %f m/s ", vel_kmh, vel_ms);
    return 0;
}

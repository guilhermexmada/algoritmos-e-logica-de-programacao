#include <stdio.h>
#include <stdlib.h>

int main()
{
      int segundos, res_hora, res_min, res_seg;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    res_hora = segundos / 3600;
    res_min = (segundos - (res_hora * 3600)) / 60;
    res_seg = (segundos - (res_hora * 3600)) - (res_min * 60);
    printf("Resultado: %d hora(s), %d minuto(s), %d segundo(s)\n", res_hora, res_min, res_seg);
    return 0;
}

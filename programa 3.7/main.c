#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N;
    float LAN, SLA = 0;
    {
        printf("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &N);

    }
   while (N < 1 || N > 11);
   for (I=1; I<=N; I++)
   {
       printf("\nIngrese el lanzamiento %d:");
       scanf("%f", &LAN);
       SLA = SLA + LAN;
   }
   SLA = SLA / N;
   printf("\nEl promedio de lanzamiento es: %.2f", SLA);
}

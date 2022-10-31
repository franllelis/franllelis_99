#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PAG, SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f" , &PAG);
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago -0 para terminar-:\t");
        scanf("%f" , &PAG);
    }
    while (PAG);
    printf("\nEl total de pagos del mes es: %.2f" , SPA);
}

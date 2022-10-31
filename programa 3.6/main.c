#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I = 0;
    float SAL, PRO, NOM = 0;
    printf("Ingrese el salario del profesor:\t");
    scanf("%f", &SAL);
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("Ingrese el salario del profesor -0 para terminar- :\t");
        scanf("%f", &SAL);

    }
    while (SAL);
    PRO = NOM / I;
    printf("\nNomina: %.2f", NOM, PRO);
}

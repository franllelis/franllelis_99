#include <stdio.h>
#include <stdlib.h>

void main(void)
{
        int I;
    float SAL, NOM;
    NOM= 0;
    for (I=1; I<=15; I++)

{
    printf("\INGRESE EL SALARIO DEL PROFESOR%d:\t*, I");
    scanf("%f", &SAL);
    NOM= NOM + SAL;


}
printf("\nEl total de la nomina es: %.2f" , NOM);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ECA;
printf("Ingrese la extension de la estancia: ");
scanf("%f", &ECA);
ECA = ECA * 4047 / 10000;
printf("\nExtensión de la estancia en hectáreas: %5.2f", ECA);
}

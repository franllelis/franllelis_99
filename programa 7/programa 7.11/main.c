#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char p, cad[50];
int n;
printf("\nIngrese la cadena de caracteres (máximo 50): ");
gets(cad);
printf("\nIngrese la posición en la cadena que desea verificar: ");
scanf("%d", &n);
if ((n >= 0) && (n < 50))
{
p = cad[n-1];
if (islower(p))
printf("\n%c es una letra minúscula", p);
else
printf("\n%c no es una letra minúscula", p);
}
else
printf("\nEl valor ingresado de n es incorrecto");
}

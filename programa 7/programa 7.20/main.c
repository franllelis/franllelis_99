#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int i, n, l = -1, p, t;
char cad[50], FRA[20][50];
printf("\nIngrese el n�mero de filas del arreglo: ");
scanf("%d", &n);
for (i=0; i<n; i++)
{
printf("Ingrese la l�nea %d de texto. M�ximo 50 caracteres: ", i+1);
fflush(stdin);
gets(FRA[i]);
}
printf("\n");
for (i=0; i<n; i++)
{
    strcpy(cad, FRA[i]);
    t = longitud (cad);
    if (t > l)
{
    l = t;
    p = i;
}
}
printf("\nLa cadena con mayor longitud es: ");
puts(FRA[p]);
printf("\nLongitud: %d", l);
}
int longitud(char *cadena)
{
int cue = 0;
while (! cadena[cue] == '\0')
cue++;
return (cue);
}

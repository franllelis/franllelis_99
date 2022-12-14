#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char fra[50];
printf("\nIngrese la línea de texto: ");
gets(fra);
printf("\nEscribe la línea de texto en forma inversa: ");
inverso(fra);
}
void inverso(char *cadena)
{
if (cadena[0]!= '\0')
{
inverso(&cadena[1]);
putchar(cadena[0]);
}
}

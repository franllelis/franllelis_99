#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char car, cad[50];
int res;
printf("\nIngrese la cadena de caracteres: ");
gets(cad);
fflush(stdin);
printf("\nIngrese el caracter: ");
car = getchar();
res = cuenta(cad, car);
printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
}
int cuenta(char *cad, char car
{
    int i = 0, r = 0;
    while (cad[i] != '\0')
}

{
    if (cad[i] == car)
        r++;
    i++;
}
return (r);

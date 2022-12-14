#include <stdio.h>
#include <stdio.h>

void main(void)
{
char p1;
FILE *ar;
ar = fopen("libro.txt", "a");

if (ar != NULL)
{
while ((p1 = getchar()) != '\n')
fputc(p1, ar);
fclose(ar);
}
else
printf("No se puede abrir el archivo");
}

#include <stdio.h>


void main(void)
{
   int NUM;
   long CUA, SUC = 0;
   printf("\nIngrese un numero entero -0 para terminar-:\t");
   scanf("%d", &NUM);
   while (NUM);
 {
     CUA = pow (NUM, 2);
   printf("%d al cubo es %ld" , NUM, CUA);
   SUC = + CUA;
   printf ("\nIngrese un numero entero -0 para terminar-:\t");
   scanf("%d", &NUM);
}
   printf("\nLa suma de los cuadrados es %ld", SUC);
}

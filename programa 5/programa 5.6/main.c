#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
    void Lectura(float *, int);
    double Suma(float *, int);
int main()
{
    float VEC[MAX];
    double RES;
    Lectura(VEC, MAX);
    RES = suma(VEC, MAX);
    printf("\n\nSuma del arreglo: %.21f", RES);
}
void Lectura(float A[], int T)
{
    int I;
    for (I=0; I<T; I++)
{

      printf("Ingrese el elemento %d: ", I+1);
             scanf("%f", &A[I]);
}
}
double suma(float S[], int T)
{
    int I;
    double AUX = 0.0;
    for (I=0; I<T; I++)
        AUX += pow(A[I], 2);
    return(AUX);
}

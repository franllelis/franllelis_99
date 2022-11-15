#include <stdio.h>
#include <stdlib.h>
/* MAestro este y los codigos que denotan errores, creame que he hecho todo para
que me pueda correr los programas pero ni asi encuentro cual es el error
DISCULPEME POR FAVOR. */

int main()
{
    int RES, ELE, TAM VEC[MAX];

    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES =Busca(VEC, TAM, ELE);
    if (RES)
        printf("\nEl elemento se encuentra en la posicion %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}
void lectura(int A[], int T)
{
    int I:
        for (I=0; I<T; I++)
{
printf("ingrese el elemento %d: ", I+1);
scanf("%d", &A[I]);
}
}
int busca(int A[], int T, int K)
{
    int I = 0, BAN = 0, RES;
    while (I < T && !BAN)
        if (A[I] == K)
        BAN++;
    else
        I++;
    if (BAN)
        RES =I +1;
    else
        RES = BAN;
    return (RES);
}

#include <stdio.h>
#include <stdio.h>

void Lectura(int [][10], int);
void Calcula(int [][10], float [], int);
float Mod0(int [][10], int, int);
float Mod1(int [][10], int);
float Mod2(int [][10], int, int);
void Imprime(float [10], int);

void main(void)
{
    int MAT[10][10],TAM;
    float VEC[10];
    do
    {
        printf("Ingrese el tama�o de la matriz: ");
        scanf("%d", &TAM);
    }
    while (TAM >10 || TAM < 1);
    Lectura(MAT, TAM);

    Calcula(MAT, VEC, TAM);
    Imprime(VEC, TAM);
}
void Lectura(int A[][10], int N)

{
    int I, J;
    for (I=0; I<N; I++)
        for (J=0; J<N; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}
void Calcula(int A[][10],float B[], int N)



{
    int I;
    for (I=0; I<N; I++)
        switch (I%3)
        {
        case 1:
            B[I] = Mod1 (A,I);
            break;
        case 2:
            B[I] = Mod2 (A,I,N);
            break;
        default:
            B[I] = Mod0 (A,I,N);
            break;
        }
}
float Mod0 (int A[][10],int K, int M)
{
    int I;
    float PRO = 1.0, SUM = 0.0;
    for (I=0; I<M; I++)
    {
        PRO *= A[I][K];
        SUM += A[I][K];
    }
    return (PRO / SUM);
}
float Mod1(int A[][10], int N)
{

    int I;
    float SUM = 0.0;
    for (I=0; I<=N; I++)
        SUM += A[N][I];
    return (SUM);
}
float Mod2 (int A[][10],int N, int M)
{
    int I;
    float PRO = 1.0;
    for (I=N; I<M; I++)
        PRO *= A[I][N];
    return (PRO);
}
void Imprime(float B[], int N)

{
    int I;
    for (I=0; I<N; I++)
        printf("\nElemento %d: %.2f ", I, B[I]);
}

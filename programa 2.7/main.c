#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float P, S, R;
    printf("\nIngrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);
    if (P > S)
        if (P > R)
        if (S > R)
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
    else
        printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
    else
        printf("\n\nEl orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
    else
        if (S > R)
        if (P >R)
        printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
        else
            printf("n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
        else
            printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);


}

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SV0;
    float P01, P02, P03, P04, P05, P0N;
    printf ("Ingrese el primer voto: ");
    scanf ("%d", &VOT);
    while (VOT)
    {
        switch (VOT)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");
        scanf("%d", &VOT);
    }
    SV0 = C1 + C2 + C3 + C4 + C5 + NU;
    P01 = ((float) C1 / SV0) * 100;
    P02 = ((float) C2 / SV0) * 100;
    P03 = ((float) C3 / SV0) * 100;
    P04 = ((float) C4 / SV0) * 100;
    P05 = ((float) C5 / SV0) * 100;
    P0N = ((float) NU / SV0) * 100;
    printf("\nTotal de votos: %d", SV0);
    printf("\nCandidato 1: %d votos .. porcentaje: %5.2f", C1, P01);
    printf("\nCandidato 2: %d votos .. porcentaje: %5.2f", C2, P02);
    printf("\nCandidato 3: %d votos .. porcentaje: %5.2f", C3, P03);
    printf("\nCandidato 4: %d votos .. porcentaje: %5.2f", C4, P04);
    printf("\nCandidato 5: %d votos .. porcentaje: %5.2f", C5, P05);
    printf("\nNulos:       %d votos .. porcentaje: %5.2f", NU, P0N);

}

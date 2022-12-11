#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double *notas, *pesos, totalNotas, totalPesos, media;

    scanf("%d", &n);
    notas = (double *)malloc(n * sizeof(double));
    pesos = (double *)malloc(n * sizeof(double));

    if ((notas != NULL) && (pesos != NULL))
    {
        for (i = 0; i < n; i++)
            scanf("%lf", (notas + i));
        for (i = 0; i < n; i++)
            scanf("%lf", (pesos + i));

        totalNotas = 0;
        totalPesos = 0;
        for (i = 0; i < n; i++)
        {
            totalNotas += notas[i] * pesos[i];
            totalPesos += pesos[i];
        }
        media = totalNotas / totalPesos;
        printf("%.2lf\n", media);

        free(notas);
        free(pesos);
    }

    return 0;
}

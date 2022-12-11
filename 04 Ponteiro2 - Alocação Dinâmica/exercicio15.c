#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int m;
    char c;
}tipo_pedaco;

int main()
{
    int n, i, j, menor;
    tipo_pedaco *p, aux;

    scanf("%d", &n);
    p = (tipo_pedaco *)malloc(n * sizeof(tipo_pedaco));
    if (p != NULL)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &p[i].m); getchar();
            scanf("%c", &p[i].c);
        }

        // ordenar pelo campo m
        for (i = 0; i < n - 1; i++)
        {
            menor = i;
            for (j = i + 1; j < n; j++)
                if (p[j].m < p[menor].m)
                    menor = j;
            if (menor != i)
            {
                aux = p[i];
                p[i] = p[menor];
                p[menor] = aux;
            }
        }

        // exibir mensagem
        for (i = 0; i < n; i++)
            printf("%c", p[i].c);
        printf("\n");

        free(p);
    }

    return 0;
}

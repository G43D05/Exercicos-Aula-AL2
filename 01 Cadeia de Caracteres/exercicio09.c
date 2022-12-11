#include <stdio.h>
#include <string.h>

const int MAX = 51;

int main()
{
    char texto[2*MAX], aux[MAX], inv[MAX], c;
    int n, i, j, k, tamanho;

    scanf("%d", &n); getchar();
    for (k = 0; k < n; k++)
    {
        fgets(texto, 2*MAX, stdin);

        tamanho = strlen(texto);
        if (texto[tamanho - 1] == '\n')
            texto[tamanho - 1] = '\0';
        else
            getchar();

        tamanho = strlen(texto);

        if (tamanho > 50)
            printf("INVALIDA\n");
        else
        {
            // compor string somente com vogais
            j = 0;
            for (i = 0; i < tamanho; i++)
            {
                c = texto[i];
                switch (c)
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': aux[j++] = c;
                }
            }
            aux[j] = '\0';

            tamanho = strlen(aux);

            if (tamanho == 0)
                printf("INVALIDA\n");
            else
            {
                // inverter
                for (i = 0; i < tamanho; i++)
                {
                    inv[tamanho - i - 1] = aux[i];
                }
                inv[tamanho] = '\0';

                if (strcmp(aux, inv) == 0)
                    printf("ENGRACADA\n");
                else
                    printf("SEM GRACA\n");
            }
        }
    }

    return 0;
}

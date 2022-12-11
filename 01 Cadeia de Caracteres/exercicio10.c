#include <stdio.h>
#include <string.h>

#define MAX 51

int main()
{
    int n, x, y, menor;
    char lista[20][MAX], aux[MAX];
    scanf("%d", &n);
    while (n != 0){
        getchar();
        for (x = 0; x < n; x++){
            scanf("%[^\n]", lista[x]); getchar();
        }

        // ordenar lista
        for (x = 0; x < n-1; x++){
            menor = x;
            for (y = x+1; y < n; y++){
                if (strcmp(lista[y], lista[menor]) < 0){
                    menor = y;
                }
            }
            if (menor != x){
                strcpy(aux, lista[menor]);
                strcpy(lista[menor], lista[x]);
                strcpy(lista[x], aux);
            }
        }

        // exibir lista ordenada
        for (x = 0; x < n; x++){
            printf("%s\n", lista[x]);
        }

        scanf("%d", &n);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int *criar(int qtd)
{
    int *p = (int *)calloc(qtd, sizeof(int));
    return p;
}

int ocorrencias(int *v, int qtd, int x)
{
    int i, cont;
    cont = 0;
    for (i = 0; i < qtd; i++)
        if (v[i] == x)
            cont++;
    return cont;
}

int main()
{
    int x, n, *l, i;
    scanf("%d%d", &x, &n);
    l = criar(n);
    for (i = 0; i < n; i++)
        scanf("%d", &l[i]);
    printf("%d\n", ocorrencias(l, n, x));
    return 0;
}

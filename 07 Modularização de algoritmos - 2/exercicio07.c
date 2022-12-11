#include <stdio.h>

void reduz(int *v, int qtd)
{
    int i;
    for (i = 0; i < qtd; i++)
        if (v[i] > 10)
            v[i] = 10;
}
int main()
{
    int n, v[200], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    reduz(v, n);
    for (i = 0; i < n; i++)
        printf("%d\n", v[i]);
    return 0;
}

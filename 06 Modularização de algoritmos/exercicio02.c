#include <stdio.h>

void exibe(int i, int f, int x);

int main()
{
    int i, f, x;
    scanf("%d%d%d", &i, &f, &x);
    exibe(i, f, x);
    return 0;
}

void exibe(int i, int f, int x)
{
    int k;
    for (k = i; k <= f; k++)
        if (k % x == 0)
            printf("%d\n", k);
}

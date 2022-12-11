#include <stdio.h>

void contagem(int x)
{
    int i, j;
    for (i = 1; i <= x; i++)
    {
        printf("%d", i);
        for (j = 2; j <= i; j++)
            printf("-%d", i);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    contagem(n);
    return 0;
}

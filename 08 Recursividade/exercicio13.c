#include <stdio.h>

int fibonacci(int x)
{
    if ((x == 1) || (x == 2))
        return 1;
    else
        return fibonacci(x - 1) + fibonacci((x - 2));
}

int main()
{
    int n, i, aux, soma = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &aux);
        soma += fibonacci(aux);
    }
    printf("%d\n", soma);
    return 0;
}

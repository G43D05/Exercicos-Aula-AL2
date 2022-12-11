#include <stdio.h>

int fatorial(int x)
{
    int i, aux;
    aux = x;
    for (i = 2; i < x; i++)
        aux = aux * i;
    return aux;
}

int main()
{
    int i, num, soma, fat;
    soma = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 3 == 0)
        {
            fat = fatorial(num);
            soma += fat;
        }
    }
    printf("%d\n", soma);
    return 0;
}

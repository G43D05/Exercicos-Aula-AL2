#include <stdio.h>

int fatorial(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fatorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n > -1)
    {
        printf("%d\n", fatorial(n));
        scanf("%d", &n);
    }
    return 0;
}

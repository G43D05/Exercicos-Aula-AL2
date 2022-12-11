#include <stdio.h>

int fat(int x)
{
    if (x == 1 || x == 0) return 1;
    else
        return x * fat(x - 1);
}

double serie(int n)
{
    if (n == 1) return 1;
    else
        return (1.0/fat(n - 1) + serie(n - 1));
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.15lf\n", serie(n));
    return 0;
}

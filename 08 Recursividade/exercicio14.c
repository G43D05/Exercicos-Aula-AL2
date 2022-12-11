#include <stdio.h>

int serie(int n, int t)
{
    if (t == 0) return n;
    if (t % 2 == 0)
        return serie(n, t-1) + (serie(n, t-1) % 5);
    else
        return serie(n, t-1) + 3;
}

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    printf("%d\n", serie(n, t));
    return 0;
}

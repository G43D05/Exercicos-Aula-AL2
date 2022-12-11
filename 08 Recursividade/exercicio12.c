#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
        return a;
    else
        return mdc(b, a%b);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", mdc(x, y));
    return 0;
}

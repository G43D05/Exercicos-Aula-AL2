#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(sizeof(int));
    int *b = (int *)malloc(sizeof(int));

    scanf("%d%d", a, b);
    if (*a < *b)
        printf("%d %d\n", *a, *b);
    else
        printf("%d %d\n", *b, *a);
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 50

int main()
{
    char a[MAX+1], b[MAX+1], c[2*MAX+1];
    int tam;

    fgets(a, MAX, stdin);
    tam = strlen(a);
    if (a[tam-1] == '\n') a[tam-1] = '\0';

    fgets(b, MAX, stdin);
    tam = strlen(b);
    if (b[tam-1] == '\n') b[tam-1] = '\0';

    strcpy(c, a);
    strcat(c, b);

    printf("%s\n", c);

    return 0;
}

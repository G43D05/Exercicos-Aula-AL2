#include <stdio.h>
#include <string.h>

int main()
{
    char texto[51];
    char a, b;
    int i;

    fgets(texto, 51, stdin);
    scanf("%c", &a); getchar();
    scanf("%c", &b); getchar();

    i = strlen(texto);
    if (texto[i - 1] == '\n')
        texto[i - 1] = '\0';

    for (i = 0; i < strlen(texto); i++)
        if (texto[i] == a)
            texto[i] = b;

    printf("%s\n", texto);
    return 0;
}

#include <stdio.h>
#include <string.h>

const int MAX_STR = 21;
const int MAX_INT = 7;

int main()
{
    char v[MAX_STR];
    int i, tam, j, cont_b, cont_c;

    cont_b = 0; cont_c = 0;
    for (i = 0; i < MAX_INT; i++)
    {
        fgets(v, MAX_STR, stdin);
        tam = strlen(v);
        if (v[tam - 1] == '\n')
            v[tam - 1] = '\0';

        // converver para maiusculas
        for (j = 0; j < strlen(v); j++)
            if ((v[j] >= 97) && (v[j] <= 122))
                v[j] = v[j] - 32;

        if (strcmp(v, "BOLICHE") == 0)
            cont_b++;
        else
            cont_c++;
    }
    if (cont_b > cont_c)
        printf("BOLICHE\n");
    else
        printf("CINEMA\n");
    return 0;
}

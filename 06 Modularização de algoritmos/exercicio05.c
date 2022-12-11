#include <stdio.h>
#include <math.h>
#include <string.h>

double rafael(int x, int y)
{
    double aux;
    aux = pow(3 * x, 2) + pow(y, 2);
    return aux;
}

double beto(int x, int y)
{
    double aux;
    aux = 2 * pow(x, 2) + pow(5 * y, 2);
    return aux;
}

double carlos(int x, int y)
{
    double aux;
    aux = -100 * x + pow(y, 3);
    return aux;
}

int main()
{
    int n, i, x, y;
    double r, b, c, maior;
    char nome[7];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        r = rafael(x, y);
        b = beto(x, y);
        c = carlos(x, y);

        maior = r;
        strcpy(nome, "Rafael");

        if (b > maior)
        {
            maior = b;
            strcpy(nome, "Beto");
        }
        if (c > maior)
        {
            maior = c;
            strcpy(nome, "Carlos");
        }
        printf("%s ganhou\n", nome);
    }

    return 0;
}

#include <stdio.h>
int const MAX = 10;

void preencher(int x[], int y[], int z[], int seedX, int seedY, int seedZ, int a, int b, int c, int maior[])
{
    int i, maiorX, maiorY, maiorZ;
    y[0] = maiorY = seedY;
    x[0] = maiorX = seedX;
    z[0] = maiorZ = seedZ;
    for (i = 1; i < MAX; i++)
    {
        x[i] = (x[i - 1] * b + c) % a;
        y[i] = (y[i - 1] * a + b) % c;
        z[i] = (z[i - 1] * c + a) % b;

        if (x[i] > maiorX) maiorX = x[i];
        if (y[i] > maiorY) maiorY = y[i];
        if (z[i] > maiorZ) maiorZ = z[i];
    }
    maior[0] = maiorX;
    maior[1] = maiorY;
    maior[2] = maiorZ;
}

int modulo(int soma, int a, int b, int c)
{
    return (soma % (a/b + c));
}

int main()
{
    int seedX, seedY, seedZ, a, b, c, soma;
    int x[MAX], y[MAX], z[MAX], maior[3];

    while(scanf("%d%d%d%d%d%d", &a, &b, &c, &seedX, &seedY, &seedZ) == 6)
    {

        preencher(x, y, z, seedX, seedY, seedZ, a, b, c, maior);

        soma = maior[0] + maior[1] + maior[2];
        soma = modulo(soma, a, b, c);

        printf("%d\n", soma);
    }
    return 0;
}

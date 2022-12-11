#include <stdio.h>

typedef struct
{
    int a, b;
}tipo_complexo;

void imprimir(tipo_complexo z)
{
    printf("%d+%di\n", z.a, z.b);
}

tipo_complexo soma(tipo_complexo z1, tipo_complexo z2)
{
    tipo_complexo aux;
    aux.a = z1.a + z2.a;
    aux.b = z1.b + z2.b;
    return aux;
}

tipo_complexo multiplica(tipo_complexo z1, tipo_complexo z2)
{
    tipo_complexo aux;
    aux.a = z1.a * z2.a - z1.b * z2.b;
    aux.b = z1.a * z2.b + z2.a * z1.b;
    return aux;
}

int main()
{
    tipo_complexo z1, z2, z3;

    scanf("%d%d", &z1.a, &z1.b);
    scanf("%d%d", &z2.a, &z2.b);

    z3 = soma(z1, z2);
    printf("Soma: ");
    imprimir(z3);

    z3 = multiplica(z1, z2);
    printf("Multi: ");
    imprimir(z3);

    return 0;
}

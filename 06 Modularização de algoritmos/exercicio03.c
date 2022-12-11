#include <stdio.h>

double velkmh(double v0, double a, double t)
{
    double aux;
    aux = v0 + a * t;
    aux = 3.6 * aux;
    return aux;
}

int main()
{
    int i;
    double v, a, t, vf, menor;
    for(i = 0; i < 3; i++)
    {
        scanf("%lf%lf%lf", &v, &a, &t);
        vf = velkmh(v, a, t);
        if ((i == 0) || (vf < menor))
            menor = vf;
    }
    printf("%.1lf\n", menor);
    return 0;
}

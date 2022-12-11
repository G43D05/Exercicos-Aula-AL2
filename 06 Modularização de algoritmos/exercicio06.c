#include <stdio.h>
#define MAX 50

double CalculaMulta(int vel)
{
	double multa;
	if (vel <= MAX)
		multa = 0;
	else if (vel <= MAX*1.1)
		multa = 230;
	else if (vel <= MAX*1.2)
		multa = 340;
	else
		multa = 19.28 * (vel-MAX);
	return multa;
}

int main()
{
	int velocidade;
	scanf("%d", &velocidade);
	printf("%.2lf\n", CalculaMulta(velocidade));
	return 0;
}
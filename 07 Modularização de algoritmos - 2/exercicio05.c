#include <stdio.h>
#define MAX 6

int menor(int *p, int qtd);
int maior(int *p, int qtd);

int main()
{
	int v[MAX], i, m1, m2;
	
	for (i = 0; i < MAX; i++)
		scanf("%d", &v[i]);
		
	m1 = menor(v, MAX);
	m2 = maior(v, MAX);
	printf("%d\n%d\n", m1, m2);
	
	return 0;
}

int menor(int *p, int qtd)
{
	int i, menor;
	menor = *p;
	for (i = 0; i < qtd; i++)
	{
		if (*(p+i) < menor)
			menor = *(p+i);
	}
	return menor;
}

int maior(int *p, int qtd)
{
	int i, maior;
	maior = *p;
	for (i = 0; i < qtd; i++)
	{
		if (*(p+i) > maior)
			maior = *(p+i);
	}
	return maior;
}

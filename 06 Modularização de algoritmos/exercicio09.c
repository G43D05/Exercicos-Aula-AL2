#include <stdio.h>
#define MAX 4

int primo(int x)
{
	int i, cont=0;
	for (i=1; i<=x; i++)
		if (x%i == 0)
			cont++;
	if (cont == 2)
		return 1;
	else
		return 0;
}

int main()
{
	int v[MAX], i, aux=0, mult=1;
	for (i=0; i<MAX; i++)
	{
		scanf("%d", &v[i]);
		mult = mult * v[i];
		if (primo(v[i]))
			aux++;
	}
	if (aux == MAX)
		printf("%d\n", mult);
	else
		printf("SEM PRODUTO\n");
	return 0;
}
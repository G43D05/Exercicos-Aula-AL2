#include <stdio.h>

#define MAX 15
#define TAM 5

void incluir(int *p, int *n, int x)
{
	int qtd;
	qtd = *n;
	*(p+qtd) = x;
	*n = qtd+1;
}

void mostrar(int *p, int n, char *texto)
{
	int i;
	for (i=0; i<n; i++)
		printf("%s[%d] = %d\n", texto, i, *(p+i));
}

int main()
{
	int v[MAX], vPar[TAM], vImpar[TAM], nPar, nImpar;
	int i;

	for(i = 0; i < MAX; i++)
		scanf("%d", &v[i]);

	nPar = nImpar = 0;
	for (i = 0; i < MAX; i++)
	{
		if (v[i] % 2)
		{
			//vImpar[nImpar++] = v[i];
			incluir(vImpar, &nImpar, v[i]);
			if(nImpar == TAM)
			{
				/*
				for (j=0; j<nImpar; j++)
					printf("impar[%d] = %d\n", j, vImpar[j]);
				*/
				mostrar(vImpar, nImpar, "impar");
				nImpar = 0;
			}
		}
		else
		{
			//vPar[nPar++] = v[i];
			incluir(vPar, &nPar, v[i]);
			if(nPar == TAM)
			{
				/*
				for (j=0; j<nPar; j++)
					printf("par[%d] = %d\n", j, vPar[j]);
					*/
				mostrar(vPar, nPar, "par");
				nPar = 0;
			}
		}
	}
	/*
	for (j=0; j<nImpar; j++)
		printf("impar[%d] = %d\n", j, vImpar[j]);
	for (j=0; j<nPar; j++)
		printf("par[%d] = %d\n", j, vPar[j]);
		*/

	mostrar(vImpar, nImpar, "impar");
	mostrar(vPar, nPar, "par");

	return 0;
}

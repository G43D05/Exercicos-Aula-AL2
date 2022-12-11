#include <stdio.h>
#include <string.h>

const int MAX = 101;

int main()
{
	int t, i, j, k, tam, maior;
	char x[MAX], aux;

	scanf("%d", &t); getchar();
	for (i = 0; i < t; i++)
	{
		fgets(x, MAX, stdin);
    	tam = strlen(x);
    	if (x[tam - 1] == '\n')
    	    x[tam - 1] = '\0';
        else
            getchar();

		// ordenar x decrescentemente
		tam = strlen(x);
		for (j = 0; j < tam - 1; j++)
		{
		    maior = j;
			for (k = j + 1; k < tam; k++)
				if (x[maior] < x[k])
                    maior = k;
            if (maior != j)
            {
                aux = x[j];
                x[j] = x[maior];
                x[maior] = aux;
            }
		}
		printf("Caso %d: %s\n", i + 1, x);
	}
	return 0;
}

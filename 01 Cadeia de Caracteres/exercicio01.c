#include <stdio.h>
#include <string.h>
#define MAX 50
int main()
{
	char str[MAX], c;
	int tam, i, cont=0;
	fgets(str, MAX+2, stdin);
	c = getchar();
	
	// corrigir str, se houver '\n'
	tam = strlen(str);
	if (str[tam-1]=='\n')
	{
	    str[tam-1] = str[tam]; // '\0'
	    //tam--;
	    tam = strlen(str);
	}

	for (i=0; i<tam; i++)
		if (str[i] == c)
			cont++;
	printf("%d\n", cont);
	return 0;
}
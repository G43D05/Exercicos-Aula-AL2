#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX 76
const char *FIM = "the end!";

void maiuscula(char *p);

int main()
{
	char **texto, aux[MAX];
	int i, qtd;
	
	texto = (char **)malloc(1 * sizeof(char *));
	
	qtd = 0;
	//gets(aux);
	fgets(aux, MAX, stdin);
	if (aux[strlen(aux)-1] == '\n'){
	    aux[strlen(aux)-1] = '\0';
	}
	
	while (strcmp(aux, FIM) != 0)
	{
		maiuscula(aux); 
		texto = (char **)realloc(texto, (qtd+1)*sizeof(char *));
		texto[qtd] = (char *)malloc((strlen(aux)+1)*sizeof(char));
		strcpy(*(texto+qtd), aux);
		qtd++;
		//gets(aux);
    	fgets(aux, MAX, stdin);
    	if (aux[strlen(aux)-1] == '\n'){
    	    aux[strlen(aux)-1] = '\0';
    	}
	}
	
	for (i = 0; i < qtd; i++)
		printf("%s\n", *(texto + i));
		
	return 0;
}

void maiuscula(char *p)
{
	int i;
	for (i = 0; i < strlen(p); i++)
		if (p[i] >= 97 && p[i] <= 122)
			p[i] = p[i] - 32;
}
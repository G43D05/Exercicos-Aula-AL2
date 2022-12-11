#include <stdio.h>
#include <string.h>

int main() {
    char texto[502];
    int i, tamanho, cont;
    fgets(texto, 500, stdin);
    tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n')
    {
        texto[tamanho - 1] = '\0';
        tamanho = strlen(texto);
    }

    for (i = 0, cont = 1; i < tamanho; i++)
    {
        if ((texto[i] == ' ') && (texto[i - 1] != ' '))
            cont++;
    }
    printf("%d\n", cont);
	return 0;
}
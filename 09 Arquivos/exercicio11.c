#include <stdio.h>
#include <ctype.h>

int main(){

    FILE *arq;

    char caracter;
    int aux;
    int contador;

    arq = fopen("meuArquivo.txt", "r");

    if (arq == NULL){

        printf("O arquivo nao pode ser aberto!\n");

        exit(1);

    }

    printf("Digite um caracter: ");

    scanf("%c", &caracter);

    caracter = tolower(caracter);

    contador = 0;
    while ((aux = fgetc(arq)) != EOF)
        if (caracter == tolower(aux))
            contador++;

    printf("%d", contador);

    fclose(arq);

    return 0;

}
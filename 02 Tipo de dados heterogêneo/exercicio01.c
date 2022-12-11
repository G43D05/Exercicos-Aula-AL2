#include <stdio.h>
#include <string.h>

#define MAX_NOME 51
const int MAX = 20;

typedef struct
{
    int idade;
    char nome[MAX_NOME];
    char sexo;
    char civil;
    int amigos;
    int fotos;
}tipo_pessoa;

int main()
{
    int n, i, tam;
    tipo_pessoa v[MAX];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i].idade); getchar();
        fgets(v[i].nome, MAX_NOME, stdin);
        tam = strlen(v[i].nome);
        if (v[i].nome[tam - 1] == '\n')
            v[i].nome[tam - 1] = '\0';
        else
            getchar();
        scanf("%c", &v[i].sexo); getchar();
        scanf("%c", &v[i].civil); //getchar();
        scanf("%d", &v[i].amigos);
        scanf("%d", &v[i].fotos);
    }

    for (i = 0; i < n; i++)
    {
        printf("Idade: %d\n", v[i].idade);
        printf("Nome: %s\n", v[i].nome);
        printf("Sexo: %c\n", v[i].sexo);
        printf("Estado Civil: %c\n", v[i].civil);
        printf("Numero de amigos: %d\n", v[i].amigos);
        printf("Numero de fotos: %d\n\n", v[i].fotos);
    }

    return 0;
}

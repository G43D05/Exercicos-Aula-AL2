#include <stdio.h>
#include <string.h>

#define MAX_NOME 50
const int MAX = 20;

typedef struct
{
    int matricula;
    char nome[MAX_NOME];
    double nota;
}tipo_aluno;

void ordenar_nota(tipo_aluno v[], int qtd)
{
    int i, j, menor;
    tipo_aluno aux;

    for (i = 0; i < qtd - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < qtd; j++)
        {
            if (v[j].nota < v[menor].nota)
                menor = j;
        }
        if (menor != i)
        {
            aux = v[menor];
            v[menor] = v[i];
            v[i] = aux;
        }
    }
}

void ordenar_2_matricula(tipo_aluno v[], int inicio, int fim)
{
    int i, k, menor;
    tipo_aluno aux;


    for (i = inicio; i < fim - 1; i++)
    {
        menor = i;
        for (k = i + 1; k < fim; k++)
            if (v[k].matricula < v[menor].matricula)
                menor = k;
        if (menor != i)
        {
            aux = v[menor];
            v[menor] = v[i];
            v[i] = aux;
        }
    }
}

int main()
{
    int n, i, tam, inicio, fim;
    tipo_aluno a[MAX];
    double soma, media;

    scanf("%d", &n);
    soma = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i].matricula); getchar();
        fgets(a[i].nome, MAX_NOME, stdin);
        tam = strlen(a[i].nome);
        if (a[i].nome[tam - 1] == '\n')
            a[i].nome[tam - 1] = '\0';
        else
            getchar();
        scanf("%lf", &a[i].nota);

        soma += a[i].nota;
    }

    media = soma / n;

    // ordenar pela nota
    ordenar_nota(a, n);

    // ordenar mesma nota pela matricula
    inicio = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i].nota != a[i - 1].nota)
        {
            // ordenar de inicio a (i - 1)
            fim = i;
            ordenar_2_matricula(a, inicio, fim);

            inicio = i;
        }
    }

    // se houver notas iguais no final do vetor
    if (inicio < (n - 1))
    {
            // ordenar de inicio a (n - 1)
            fim = n;
            ordenar_2_matricula(a, inicio, fim);
    }


    for (i = 0; i < n; i++)
    {
        if (a[i].nota > media)
            printf("Matricula: %d Nome: %s Nota: %.1lf\n", a[i].matricula, a[i].nome, a[i].nota);
    }
    printf("Media = %.2lf\n", media);

    return 0;
}

/*
int main()
{
    int n, i, tam, j, menor, inicio, fim, k;
    tipo_aluno a[MAX], aux;
    double soma, media;

    scanf("%d", &n);
    soma = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i].matricula); getchar();
        fgets(a[i].nome, MAX_NOME, stdin);
        tam = strlen(a[i].nome);
        if (a[i].nome[tam - 1] == '\n')
            a[i].nome[tam - 1] = '\0';
        else
            getchar();
        scanf("%lf", &a[i].nota);

        soma += a[i].nota;
    }

    media = soma / n;

    // ordenar pela nota
    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j].nota < a[menor].nota)
                menor = j;
        }
        if (menor != i)
        {
            aux = a[menor];
            a[menor] = a[i];
            a[i] = aux;
        }
    }

    // ordenar mesma nota pela matricula
    inicio = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i].nota != a[i - 1].nota)
        {
            // ordenar de inicio a (i - 1)
            fim = i;
            for (j = inicio; j < fim - 1; j++)
            {
                menor = j;
                for (k = j + 1; k < fim; k++)
                    if (a[k].matricula < a[menor].matricula)
                        menor = k;
                if (menor != j)
                {
                    aux = a[menor];
                    a[menor] = a[j];
                    a[j] = aux;
                }
            }

            inicio = i;
        }
    }

    // se houver notas iguais no final do vetor
    if (inicio < (n - 1))
    {
            // ordenar de inicio a (n - 1)
            fim = n;
            for (j = inicio; j < fim - 1; j++)
            {
                menor = j;
                for (k = j + 1; k < fim; k++)
                    if (a[k].matricula < a[menor].matricula)
                        menor = k;
                if (menor != j)
                {
                    aux = a[menor];
                    a[menor] = a[j];
                    a[j] = aux;
                }
            }

    }


    for (i = 0; i < n; i++)
    {
        if (a[i].nota > media)
            printf("Matricula: %d Nome: %s Nota: %.1lf\n", a[i].matricula, a[i].nome, a[i].nota);
    }
    printf("Media = %.2lf\n", media);

    return 0;
}
*/

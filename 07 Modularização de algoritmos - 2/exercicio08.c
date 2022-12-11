#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 20

typedef struct
{
    char nome[MAX_CHAR];
    double nota;
}tipo_aluno;

tipo_aluno *criar_ler(int *qtd)
{
    int aux = 0;
    tipo_aluno *p = (tipo_aluno *)malloc(sizeof(tipo_aluno));
    scanf("%s", p[0].nome);
    while (strcmp(p[aux].nome, "*") != 0)
    {
        scanf("%lf", &p[aux].nota);
        aux++;
        p = (tipo_aluno *)realloc(p, (aux + 1) * sizeof(tipo_aluno));
        scanf("%s", p[aux].nome);
    }
    *qtd = aux;
    return p;
}

double media(tipo_aluno *v, int qtd)
{
    double soma;
    int i;
    soma = 0;
    for (i = 0; i < qtd; i++)
        soma += v[i].nota;
    return (soma / qtd);
}

tipo_aluno melhor_aluno(tipo_aluno *v, int qtd)
{
    int maior, i;
    maior = 0;
    for (i = 1; i < qtd; i++)
        if (v[i].nota > v[maior].nota)
            maior = i;
    return v[maior];
}

int main()
{
    tipo_aluno *tA, *tB, melhorA, melhorB, melhorAux;
    int qtdA, qtdB;
    double mediaA, mediaB;
    tA = criar_ler(&qtdA);
    tB = criar_ler(&qtdB);
    mediaA = media(tA, qtdA);
    mediaB = media(tB, qtdB);
    if ((mediaA > 8) && (mediaB > 8))
        printf("Viagem para todos!\n");
    else if (mediaA > 8)
        printf("Viagem para turma A\n");
    else if (mediaB > 8)
        printf("Viagem para turma B\n");
    else
        printf("Nenhuma das turmas viaja...\n");

    melhorA = melhor_aluno(tA, qtdA);
    melhorB = melhor_aluno(tB, qtdB);
    if ((melhorA.nota > 8) || (melhorB.nota > 8))
    {
        if (melhorA.nota > melhorB.nota)
            melhorAux = melhorA;
        else
            melhorAux = melhorB;
        printf("%s ganhou viagem e ingresso no parque!\n", melhorAux.nome);
        printf("Nota: %.2lf\n", melhorAux.nota);
    }
    else
        printf("Ninguem ganhou viagem e ingresso no parque...\n");

    return 0;
}

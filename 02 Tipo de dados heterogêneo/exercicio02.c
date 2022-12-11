#include <stdio.h>
#include <string.h>

#define MAX_STR 51
const int MAX = 20;

typedef struct
{
    int codigo;
    char descricao[MAX_STR];
    double preco;
}tipo_produto;

int main()
{
    int n, i, tam, codigo, qtd, achou;
    tipo_produto p[MAX];
    double soma;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i].codigo); getchar();
        fgets(p[i].descricao, MAX_STR, stdin);
        tam = strlen(p[i].descricao);
        if (p[i].descricao[tam - 1] == '\n')
            p[i].descricao[tam - 1] = '\0';
        else
            getchar();
        scanf("%lf", &p[i].preco);
    }

    soma = 0;
    do
    {
        scanf("%d", &codigo);
        if (codigo != 0)
        {
            scanf("%d", &qtd);

            if (qtd >= 0)
            {
                i = 0; achou = 0;
                while ((i < n) && (!achou))
                {
                    if (p[i].codigo == codigo)
                    {
                        achou = 1;
                        soma += qtd * p[i].preco;
                    }
                    i++;
                }
            }
        }
    }while (codigo != 0);
    printf("%.2lf\n", soma);
    return 0;
}

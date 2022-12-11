#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int moradores;
    int consumo;
    double media;
}tipo_imovel;

typedef struct{
    int media;
    int moradores;
}tipo_media;

int main(){
    tipo_imovel *p;
    tipo_media *medias, aux;
    int n, x, y, i, j, media_imovel, cont_medias, posicao;
    int menor, total_consumo, total_moradores, caso_teste;
    double consumo_medio;
    caso_teste = 0;
    scanf("%d", &n);
    while (n != 0){
        caso_teste++;
        cont_medias = 0;
        total_consumo = 0;
        total_moradores = 0;
        p = (tipo_imovel *)calloc(n, sizeof(tipo_imovel));

        for (i = 0; i < n; i++){
            scanf("%d%d", &x, &y);
            media_imovel = y / x;
            p[i].moradores = x;
            p[i].consumo = y;
            p[i].media = media_imovel;

            total_consumo += y;
            total_moradores += x;

            // buscar media_imovel no array "medias"
            posicao = -1;
            for (j = 0; j < cont_medias; j++){
                if (medias[j].media == media_imovel){
                    posicao = j;
                }
            }

            // atualizar array "medias"
            if (posicao == -1){
                posicao = cont_medias;
                cont_medias++;
                if (i == 0){
                    medias = (tipo_media *)calloc(1, sizeof(tipo_media));
                }
                else {
                    medias = (tipo_media *)realloc(medias, cont_medias * sizeof(tipo_media));
                    medias[posicao].moradores = 0;
                }
                medias[posicao].media = media_imovel;

            }
            medias[posicao].moradores += x;
        }

        // ordenar array "medias"
        for (i = 0; i < cont_medias - 1; i++){
            menor = i;
            for (j = i + 1; j < cont_medias; j++){
                if (medias[j].media < medias[menor].media){
                    menor = j;
                }
            }
            if (menor != i){
                aux = medias[menor];
                medias[menor] = medias[i];
                medias[i] = aux;
            }
        }

        printf("Cidade# %d:\n", caso_teste);
        // exibir resultados
        for (i = 0; i < cont_medias; i++){
            if (i > 0){
                printf(" ");
            }
            printf("%d-%d", medias[i].moradores, medias[i].media);
        }
        printf("\n");

        consumo_medio = (double)total_consumo / total_moradores;
        printf("Consumo medio: %.2lf m3.\n\n", consumo_medio);

        free(medias);
        free(p);

        scanf("%d", &n);
    }
    return 0;
}

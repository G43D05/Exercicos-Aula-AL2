#include <stdio.h>
#include <ctype.h>

int main(){

    FILE *arq;
    char aux;
    int qtdeP, qtdeQ, qtdeR, qtdeS, qtdeT;

    arq = fopen("meuArquivo.txt", "r");

    if (arq == NULL){

        printf("O arquivo nao pode ser aberto!\n");
        exit(1);

    }

    qtdeP = qtdeQ = qtdeR = qtdeS = qtdeT = 0;
    while ((aux = fgetc(arq)) != EOF){
        aux = tolower(aux);
        switch(aux){
        case 'p':
            qtdeP++;
            break;
        case 'q':
            qtdeQ++;
            break;
        case 'r':
            qtdeR++;
            break;
        case 's':
            qtdeS++;
            break;
        case 't':
            qtdeT++;
            break;
        }
    }

    printf("Quantide de caracter P: %d\n", qtdeP);
    printf("Quantide de caracter Q: %d\n", qtdeQ);
    printf("Quantide de caracter R: %d\n", qtdeR);
    printf("Quantide de caracter S: %d\n", qtdeS);
    printf("Quantide de caracter T: %d\n", qtdeT);

    fclose(arq);

    return 0;
}

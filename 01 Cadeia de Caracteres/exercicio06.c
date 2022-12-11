#include <stdio.h>
#include <string.h>

#define MAX 31

int main()
{
    int n, x, tam;
    char s[MAX], aux[MAX];

    fgets(s, MAX, stdin);
    tam = strlen(s);
    if (s[tam-1] == '\n'){
        s[tam-1] = '\0';
    }

    scanf("%d", &n);

    strcpy(aux, s);

    // converter para minuscula e deslocar
    for (x = 0; x < strlen(aux); x++){
        if (aux[x] >= 65 && aux[x] <= 90){
            aux[x] = aux[x] + 32;
        }
        aux[x] = aux[x] + n;
    }
    printf("%s\n", aux);

    return 0;
}

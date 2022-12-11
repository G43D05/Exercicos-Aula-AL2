#include <stdio.h>
#include <string.h>

int main() {
    char s[256], aux[256];
    int i;

    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
        aux[strlen(s) - i - 1] = s[i];
    aux[strlen(s)] = '\0';
    printf("%s\n", aux);
	return 0;
}
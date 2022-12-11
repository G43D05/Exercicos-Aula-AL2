#include <stdio.h>
int SomaDigitos(int x)
{
	int soma=0, aux=x;
	while (aux > 0)
	{
		soma += aux%10;
		aux = aux/10;
	}
	return soma;
}

int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", SomaDigitos(num));
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int maior(int a, int b, int c)
{
	int max;
	max = (a+b+abs(a-b))/2;
	max = (max+c+abs(max-c))/2;
	return max;
}

int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("%d eh o maior\n", maior(x, y, z));
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n, i, x;
	printf("Dati numarul de elemente: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Dati elementul nr. %d: ", i + 1);
		scanf("%d", &x);
		if (((x << 31) | 0) == 0)
			printf("%d este par\n", x);
		else
			printf("%d este impar\n", x);
	}
	system("pause");
	return 0;

}
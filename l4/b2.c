#include<stdio.h>
#include<stdlib.h>
int suma(int v[100], int n, int* s)
{
	int i;
	*s = 0;
	for (i = 0; i < n; i++)
		*s = *s + v[i];
	return *s;
}
int main()
{
	int v[100], n, i, s;
	printf("Dati numarul de elemente: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	printf("Suma este %d\n", suma(v, n, &s));
	system("pause");
	return 0;
}
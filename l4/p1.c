#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *v, *n, *i,*s;
	n = (int*)malloc(sizeof(int));
	s = (int*)malloc(sizeof(int));
	i = (int*)malloc(sizeof(int));
	printf("Dati numarul de elemente: ");
	scanf("%d", n);
	v = (int*)malloc(sizeof(int) * (*n));
	*s = 0;
	for (*i = 0; *i < *n; (*i)++)
	{
		scanf("%d", (v + *i));
		*s+=*(v + *i);
	}
	printf("Suma este %d\n", *s);
	system("pause");
	return 0;
}
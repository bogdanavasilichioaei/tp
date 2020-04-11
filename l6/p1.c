#include <stdio.h>
#include <stdlib.h>
int maxim=0;
void citire(int v[20][20], int n)
{
    int i, j;
    for (i = 0;i < n;i++)
        for (j = 0;j <= i;j++)
            scanf("%d", &v[i][j]);
}
int  suma(int v[20][20], int n, int sum, int i, int j)
{
    sum = sum + v[i][j];
    if (maxim < sum)
        maxim = sum;
    if (i == n) 
        return maxim;
    i = i + 1;
    suma(v, n, sum, i, j);
    suma(v, n, sum, i, j + 1);
}
int main() 
{
    int v[20][20], n, sum=0;
    scanf("%d", &n);
    citire(v, n);
    maxim = suma(v, n, sum, 0, 0);
    printf("Suma maxima: %d\n", maxim);
    return 0;
    system("pause");
}
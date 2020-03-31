#include<stdio.h>
#include<stdlib.h>
#define marime 50
int stiva[marime], stivaP[marime], top = -1, topP=-1;
void push(int val)
{
	if (top==marime-1)
		printf("Stiva este plina!\n");
	else {
		top++;
		stiva[top] = val;
		printf("Elementul inserat este: %d\n", val);
	}
}
void poop()
{
	if (top == -1)
		printf("Stiva este goala!\n");
	else
		top=top-1;
}
int isFull()
{
	if (topP == marime - 1)
		return 1;
	else return 0;
}
int isEmpty()
{
	if (topP == -1)
		return 1;
	else return 0;
}
void pushP(int val)
{
	if (isFull())
		printf("Stiva este plina!\n");
	else {
		topP++;
		stivaP[topP] = val;
		printf("Elementul inserat este: %d\n", val);
	}
}
void poopP()
{
	if (isEmpty())
		printf("Stiva este goala!\n");
	else
		topP -= 1;
}
int binar(int x)
{
	int k = 0, binary[10], i, baza2 = 0;
	while (x > 0)
	{
		binary[k] = x % 2;
		x /= 2;
		k++;
	}
	for (i = k - 1; i >= 0; i--)
		baza2 = baza2 * 10 + binary[i];
	return baza2;
}
int prim(int x)
{
	int i;
	if (x == 1)
		return 0;
	for (i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return 0;
	return 1;
}
int main()
{
	int i=1, v[50], k = 0;
	while (i <= 50)
	{
		push(i);
		i++;
	}
	while (top != -1)
	{
		if (prim(stiva[top]) == 1)
			pushP(binar(stiva[top]));
		else
			v[k++] = stiva[top];
		poop();
	}
	i = k - 1;
	while (i >= 0)
	{
		push(v[i]);
		i--;
	}
	for (i = 0; i <= top; i++)
		printf("%d ", stiva[i]);
	printf("\n");
	for (i = 0; i <= topP; i++)
		printf("%d ", stivaP[i]);
	printf("\n");
	system("pause");
	return 0;
}

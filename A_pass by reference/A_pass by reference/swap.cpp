#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int*, int*);
int main()
{
	int a, b;
	printf("Input : ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("Output : %d %d\n", a, b);
}
void swap(int* x, int* y)
{
	int keep;
	keep = *x;
	*x = *y;
	*y = keep;
}
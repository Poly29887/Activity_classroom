#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int perfect_sqr(int);
int main()
{
	int num;
	float sqr_num;
	printf("Input : ");
	scanf("%d", &num);

	if (perfect_sqr(num) == 1)
	{
		printf("Perfect square\n");
	}
	else 
	{
		printf("Not perfect square\n"); 
	}

}
int perfect_sqr(int x)
{
	int sqrt_numInt;
	float sqrt_numFloat;
	sqrt_numFloat = sqrt(x);
	sqrt_numInt = sqrt(x);
	if (sqrt_numFloat - sqrt_numInt == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
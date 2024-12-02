#include<stdio.h>
int main()
{
	int a = 7;
	int b,c,i;
	for (c = 1; c <= a; c++)
	{
		for (b = 1; b <=a-c; b++)
		{
			printf(" ");
		}
		for (i = 1; i <= (2*c-1); i++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (c = 6;c>=1; c--)
	{
		for (b = 1; b<=a - c; b++)
		{
			printf(" ");
		}
		for (i = 1; i <= (2 * c - 1); i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

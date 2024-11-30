#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	while(n!=0)
	{
		c+=(n&1);
		n = n>>1;
	}
	for(int i=0;i<c;i++)
	{
		printf("1");
	}
	printf("\n");
	for(int i=0;i<(32-c);i++)
	{
		printf("0");
	}
	return 0;
}

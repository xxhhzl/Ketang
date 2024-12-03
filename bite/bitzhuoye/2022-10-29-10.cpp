#include<stdio.h>
void cfb(int n)
{
	for(int i =1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d * %d = %d",i,j,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	cfb(n);
	return 0;
}

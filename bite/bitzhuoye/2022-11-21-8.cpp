#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i][j]!=0)
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}

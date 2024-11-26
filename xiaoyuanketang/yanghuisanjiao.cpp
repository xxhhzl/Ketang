#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		a[i][0]=1;
		printf("%d ",a[i][0]);
		for(int j=0;j<n;j++)
		{
			if(i>1 && j>0 && j<i)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				printf("%d ",a[i][j]);
			}
		}
		if(i>0)
		{
			a[i][i]=1;
			printf("%d",a[i][i]);
		}
		printf("\n");
	}
	return 0;
}

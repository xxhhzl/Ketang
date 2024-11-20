#include<stdio.h>
int css(int a[],int n)
{
	int b;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				b = a[i+1];
				a[i+1] = a[i];
				a[i] = b;
			}
		}
		return css(a,n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	css(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

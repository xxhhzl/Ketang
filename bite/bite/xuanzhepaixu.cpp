#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(int j=0;j<(n-1);j++)
    {
  		int b=j;
		for(int i=j+1;i<n;i++)
		{
			if(a[b]>=a[i])
			{
				b = i;
			}
		}
		int c;
		c = a[j];
		a[j] = a[b];
		a[b] = c;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int b[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int a = 0;
	for(int d=0;d<((n*(n-1))/2);d++)
	{
		for(int c=0;c<n;c++)
	    {
			if(b[c]>b[c+1])
			{
				a = b[c+1];
				b[c+1] = b[c];
				b[c] = a;
			}
	    }
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}

#include<stdio.h>
void css(int *t,int n)
{
	int i,a,c=0;
	for(c;c<n-1;c++)
	{
	    for(i=0;i<n-1-c;i++) 
		{
			if(t[i]>=t[i+1])
			{
				a = t[i];
				t[i] = t[i+1];
				t[i+1] = a;
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int t[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	css(t,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",t[i]);
	}
	return 0;
} 

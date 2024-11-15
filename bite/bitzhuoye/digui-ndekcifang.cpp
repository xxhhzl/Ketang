#include<stdio.h>
int css(int n,int k)
{
	if(k<=1)
	{
		return n;
	}
	else
	{
		return css(n,k-1)*n;
	}
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",css(n,k));
	return 0;
}

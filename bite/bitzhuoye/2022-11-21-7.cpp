#include<stdio.h>
int main()
{
	int n,a=0,b;
	scanf("%d",&n);
	a+=n;
	while(n>1)
	{
	    b=0;
		if(n%2!=0)
		{
			b=n%2;
		}
		n=n/2;
		a+=n;
		n+=b;
	}
	printf("%d",a);
	return 0;
}

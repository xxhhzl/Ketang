#include<stdio.h>
#include<math.h>
//第一种 
/*
int main()
{
	int n,c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		c++;
		n=n&(n-1);
	}
	printf("%d",c);
	return 0;
}
*/
//第二种 
int main()
{
	int n,c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		c+=(n&1);
		n = n>>1;
	}
	printf("%d",c);
	return 0;
}


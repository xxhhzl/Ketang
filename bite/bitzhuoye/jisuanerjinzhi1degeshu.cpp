#include<stdio.h>
#include<math.h>
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

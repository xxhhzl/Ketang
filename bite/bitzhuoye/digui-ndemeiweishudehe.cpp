#include<stdio.h>
int css(int n)
{
	int a;
	if(n<=9)
	{
		return n;
	}
	else
	{
		a = n%10;
		return a+css(n/10);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",css((n)));
	return 0;
}

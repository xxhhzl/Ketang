#include<stdio.h>
int css(int x,int y)
{
	if(x<y)
	{
		return y;
	}
	else
	{
		return x;
	}
}
int cas(int x,int y)
{
	return x<y?y:x;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",css(a,b));
	printf("%d",cas(a,b));
	return 0;
}

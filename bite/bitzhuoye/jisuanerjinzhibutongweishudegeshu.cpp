#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c = a^b;
	int d=0;
	while(c!=0)
	{
		d+=(c&1);
		c = c>>1;
	}
	printf("%d",d);
	return 0;
}

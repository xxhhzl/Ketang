#include<stdio.h>
int main()
{
	int a,b=0,c=0,d=0;
	scanf("%d",&a);
	for(int i=0;i<5;i++)
	{
		b=c+a;
		d=d+b;
		c=b*10;
	}
	printf("%d",d);
}

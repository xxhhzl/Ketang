#include<stdio.h>
#include<math.h>
void css(int n)
{
	int a=0,b,c=n,i=1,d=n;
	for(i;d!=0;i++)
	{
		d=d/10;
	}
	while(n)
	{
		b=n%10;
		a=a+pow(b,(i-1));
		n=n/10;
	}
	if(a==c)
	{
		printf("%d ",c);
	}
}
int main()
{
	for(int n=0;n<=100000;n++)
	{
		css(n);
	}
	return 0;
}

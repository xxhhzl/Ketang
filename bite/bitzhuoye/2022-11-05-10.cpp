#include<stdio.h>
void intt(int* n,int a)
{
	for(int i=0;i<a;i++)
	{
		n[i]=0;
	}
}
void print(int n[],int a)
{
	for(int i=0;i<a;i++)
	{
		printf("%d ",n[i]);
	}
}
void reverse(int* n,int a)
{
	int  b,i=0;
	while(i<=a)
	{
		a-=1;
		b=n[i];
		n[i]=n[a];
		n[a]=b;
		i++;
	}
}
int main()
{
	int n[]={1,2,3,4,5};
	int a = 5;
	reverse(n,a);
	print(n,a);
	intt(n,a);
	print(n,a);
	return 0;
}

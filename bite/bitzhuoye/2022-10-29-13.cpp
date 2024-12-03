#include<stdio.h>
int is_prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return n;
}
int main()
{
	for(int i=100;i<=200;i++)
	{
		if(is_prime(i)!=0)
		printf("%d ",is_prime(i));
	}
	return 0;
}

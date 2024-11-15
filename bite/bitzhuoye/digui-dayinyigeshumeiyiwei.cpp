#include<stdio.h>
#include<stdlib.h>
void css(char *n)
{
	if(*n=='\0')
	{
		return;
	}
	else
	{
		printf("%c ",*n);
		return css(n+1);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	char n[30];
	itoa(a,n,10);
	css(n);
	return 0;
}

#include<stdio.h>
int css(char *n)
{
	if(*n=='\0')
	{
		return 0;
	}
	else
	{
		return css(n+1)+1;
	}
}
int cas(char *n)
{
	int a;
	while(*n!='\0')
	{
		a++;
		n++;
	}
	return a;	
}
int main()
{
	
	char n[]="abcdef";
	printf("%d\n",cas(n));
	printf("%d\n",css(n));
	return 0; 
}

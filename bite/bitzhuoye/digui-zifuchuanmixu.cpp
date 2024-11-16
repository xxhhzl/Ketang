#include<stdio.h>
#include<string.h>
void css(char* n)
{
	int a = strlen(n);
	if((a-1)>=2)
    {
		char b = *n;
		*n = *(n+a-1);
		*(n+a-1)='\0';
		css(n+1);
		*(n+a-1)=b;
    }
}
int main()
{
	char n[]="abcdef";
	css(n);
	printf("%s",n);
	return 0;
}


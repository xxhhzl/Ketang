#include <stdio.h>
#include<string.h>
void css(char* n,int a)
{
    for(a=a-1;a>=0;a--)
    {
        printf("%c",*(n+a));
    }
}
int main()
{
    char n[10000];
    gets(n);
    int a=strlen(n);
    css(n,a);
    return 0;
}

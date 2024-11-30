#include <stdio.h>
int main()
{
    int a,i=0;
    scanf("%d",&a);
    int b[1000]={0};
    while(a!=0)
    {
        b[i]=a%6;
        a=a/6;
        i++;
    }
    for(i--;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    return 0;
}

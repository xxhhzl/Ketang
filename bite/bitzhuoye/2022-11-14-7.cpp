#include <stdio.h>
int main()
{
    int n,b,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int j=0;j<n;j++)
    {
        if(b!=a[j])
        {
            printf("%d ",a[j]);
        }
    }
    return 0;
}

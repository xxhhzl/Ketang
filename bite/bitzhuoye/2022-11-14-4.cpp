#include <stdio.h>
int main()
{
    int N,M,b=0;
    scanf("%d %d",&N,&M);
    int a[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>0)
            {
                b = b+a[i][j];
            }
        }
    }
    printf("%d",b);
    return 0;
}

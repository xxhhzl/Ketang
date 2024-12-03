#include<stdio.h>
void puanduan(int n)
{
	if((n%4==0 && n%100!=0 )|| n%400==0)
	{
		printf("YES");
		return;
	}
	printf("NO");
}
int main()
{
	int n;
	scanf("%d",&n);
	puanduan(n);
	return 0;
}

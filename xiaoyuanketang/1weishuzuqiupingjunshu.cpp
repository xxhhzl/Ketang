#include<stdio.h>
int main()
{
	int b[5] = {90,92,85,78,81};
	int c[5] = {93,95,78,82,83};
	int d[5] = {89,95,80,80,86}; 
	for(int i=0;i<5;i++)
	{
		printf("%d\n",((b[i]+c[i]+d[i])/3));
    } 
    int e = 0;
    for(int i = 0;i<5;i++)
    {
    	e = e+(b[i]+c[i]+d[i]);
	}
	printf("%d\n",e/5);
	 return 0;
}

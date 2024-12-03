#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	int A[n],B[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
	}
	for(int i=0;i<n;i++)
	{
		a=A[i];
		A[i]=B[i];
		B[i]=a;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",B[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
			switch(b)
			{
				case 1:
					printf("31");
					break;
				case 2:
					if((a%4==0 && a%100!=0 ) || a%400==0)
					{
						printf("29");
					}
					else
					{
						printf("28");
					}
					break;
				case 3:
					printf("31");
					break;
				case 4:
					printf("30");
					break;
				case 5:
					printf("31");
					break;
				case 6:
					printf("30");
					break;
				case 7:
					printf("31");
					break;
				case 8:
					printf("31");
					break;
				case 9:
					printf("30");
					break;
				case 10:
					printf("31");
					break;
				case 11:
					printf("30");
					break;
				case 12:
					printf("31");
					break;
					
			}
	}
	return 0;
}

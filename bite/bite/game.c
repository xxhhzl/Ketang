#include"game.h"
//游戏主界面
void youxijiemian(void)
{
	printf("*************************\n");
	printf("*******1.开始游戏********\n");
	printf("*******2.退出    ********\n");
	printf("*************************\n");
}
//初始化棋盘
void css(char n[COL][BO])
{
	int i;
	for (i = 0; i < COL; i++)
	{
		int j;
		for (j = 0; j < BO; j++)
		{
			n[i][j] =' ';
		}
	}
}
//创造与打印棋盘
void cas(char n[COL][BO])
{
	int i;
	for (i = 0; i < COL; i++)
	{
		int j;
		for (j = 0; j < BO; j++)
		{
			printf(" %c ", n[i][j]);
			if (j < (BO - 1))
			{
				printf(" | ");
			}
		}
		printf("\n");
		for (j = 0; j < BO; j++)
		{
			printf("___");
			if (j < (BO - 1))
			{
				printf(" | ");
			}
		}
		printf("\n");
	}
}
//玩家输入与输出
void cbs(char n[COL][BO])
{
	int x, y;
	printf("玩家回合：\n");
	while (1)
	{
		s:
		printf("请输入坐标:>");
	    scanf("%d %d", &x, &y);
		if (x > COL || y > BO)
		{
			printf("输入坐标大于棋盘，请重新输入\n");
			goto s;
		}
		if (n[x - 1][y - 1] != '#')
		{
			n[x-1][y-1] = '*';
			break;
		}
		else
		{
			printf("此坐标已被下，请重新输入\n");
		}
	}
	cas(n);
}
//电脑输出
void ccs(char n[COL][BO])
{
	printf("电脑回合：\n");
	while (1)
	{
        int x = rand() % 3;
	    int y = rand() % 3;
		if (n[x][y] != '*')
		{
			n[x][y] = '#';
			break;
		}
	}
}
//判断输赢
//1表示玩家获胜，2表示电脑获胜，3表示平局，4表示继续
int ces(char n[COL][BO])
{
	int i;
	for (i = 0; i < COL; i++)
	{
		int j,c=0,d=0;
		for (j = 0; j < BO; j++)
		{
			if (n[i][j] == '*')
			{
				c++;
				if (c == 3)
				{
					printf("玩家获胜\n");
					return 1;
				}
			}
			if (n[i][j] == '#')
			{
				d++;
				if (d == 3)
				{
					printf("电脑获胜\n");
					cas(n);
					return 2;
				}
			}
		}
	}
	for (i = 0; i < BO; i++)
	{
		int j,c=0,d=0;
		for (j = 0; j < COL; j++)
		{
			if (n[i][j] == '*')
			{
				c++;
				if (c == 3)
				{
					printf("玩家获胜\n");
					return 1;
				}
			}
			if (n[i][j] == '#')
			{
				d++;
				if (d == 3)
				{
					printf("电脑获胜\n");
					cas(n);
					return 2;
				}
			}
		}
	}
	if (n[0][0] == n[1][1] && n[1][1] == n[2][2] && n[0][0] == '*')
	{
		printf("玩家获胜\n");
		return 1;
	}
	if (n[2][0] == n[1][1] && n[1][1] == n[0][2] && n[2][0] == '#')
	{
		printf("电脑获胜\n");
		cas(n);
		return 2;
	}
	for (i = 0; i < COL; i++)
	{
		int j;
		for (j = 0; j < BO; j++)
		{
			if (n[i][j] == ' ')
			{
				return 4;
			}
		}
	}
	printf("平局\n");
	return 3;
}
//总组成
void cds(char n[COL][BO])
{
	int a;
	do
	{
		cas(n);
		cbs(n);
		ccs(n);
		a = ces(n);
	} while (a == 4);
}



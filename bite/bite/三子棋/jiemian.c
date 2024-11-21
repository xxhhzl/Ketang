#include"game.h"
int main()
{
	//col行 bo列
	char n[COL][BO];
	int a;
	srand((unsigned int)time(NULL));
	while (1)
	{
		//游戏主界面
		youxijiemian();
		printf("请输入数字:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			//初始化棋盘
			css(n);
			cds(n);
			break;
		case 2:
			return 0;
			break;
		default:
			printf("输入的数字有误，请从新输入");
			break;
		}
	}
	return 0;
}
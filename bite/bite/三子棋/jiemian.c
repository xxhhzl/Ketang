#include"game.h"
int main()
{
	//col�� bo��
	char n[COL][BO];
	int a;
	srand((unsigned int)time(NULL));
	while (1)
	{
		//��Ϸ������
		youxijiemian();
		printf("����������:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			//��ʼ������
			css(n);
			cds(n);
			break;
		case 2:
			return 0;
			break;
		default:
			printf("����������������������");
			break;
		}
	}
	return 0;
}
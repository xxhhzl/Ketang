#include"game.h"
//��Ϸ������
void youxijiemian(void)
{
	printf("*************************\n");
	printf("*******1.��ʼ��Ϸ********\n");
	printf("*******2.�˳�    ********\n");
	printf("*************************\n");
}
//��ʼ������
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
//�������ӡ����
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
//������������
void cbs(char n[COL][BO])
{
	int x, y;
	printf("��һغϣ�\n");
	while (1)
	{
		s:
		printf("����������:>");
	    scanf("%d %d", &x, &y);
		if (x > COL || y > BO)
		{
			printf("��������������̣�����������\n");
			goto s;
		}
		if (n[x - 1][y - 1] != '#')
		{
			n[x-1][y-1] = '*';
			break;
		}
		else
		{
			printf("�������ѱ��£�����������\n");
		}
	}
	cas(n);
}
//�������
void ccs(char n[COL][BO])
{
	printf("���Իغϣ�\n");
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
//�ж���Ӯ
//1��ʾ��һ�ʤ��2��ʾ���Ի�ʤ��3��ʾƽ�֣�4��ʾ����
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
					printf("��һ�ʤ\n");
					return 1;
				}
			}
			if (n[i][j] == '#')
			{
				d++;
				if (d == 3)
				{
					printf("���Ի�ʤ\n");
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
					printf("��һ�ʤ\n");
					return 1;
				}
			}
			if (n[i][j] == '#')
			{
				d++;
				if (d == 3)
				{
					printf("���Ի�ʤ\n");
					cas(n);
					return 2;
				}
			}
		}
	}
	if (n[0][0] == n[1][1] && n[1][1] == n[2][2] && n[0][0] == '*')
	{
		printf("��һ�ʤ\n");
		return 1;
	}
	if (n[2][0] == n[1][1] && n[1][1] == n[0][2] && n[2][0] == '#')
	{
		printf("���Ի�ʤ\n");
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
	printf("ƽ��\n");
	return 3;
}
//�����
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



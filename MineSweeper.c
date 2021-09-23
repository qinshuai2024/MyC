#pragma once

#include"MineSweeper.h"


//�����ʼ��
void InitBoard(char board[][COLS], int row, int col, char ch)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ch;
		}
	}
}

//��ʾ�������
void DisplayBoard(char board[][COLS], int row, int col)
{
	printf("------------------------\n");
	printf("  ");
	for (int i = 1; i <= col; i++)
	{
		printf("%2d", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%2d", i);
		for (int j = 1; j <= col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------\n");
}

//������
void SetMine(char board[][COLS], int row, int col)
{
	int count = MINE_COUNT;
	while (count)
	{
		//�������׵�����
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//�ж��Ƿ��Ѿ�����
		if (board[x][y] != '1')
		{
			//�����ף��ͷ�
			board[x][y] = '1';
			count--;
		}
	}
}

//��Ϸ��ڣ�ѡ���Ų���߱��
void PlayGame(char mine[][COLS], char show[][COLS], int row, int col)
{
	int win_count = 0;//�Ų��������

	//�Ų�����������ڡ�0����������ʱ�� ���� �����ȷ�׵������������õ����������������׳ɹ�
	while (win_count < (row * col - MINE_COUNT) && mark_count < MINE_COUNT)
	{

		printf("################################\n");
		printf("#########   1. �Ų���   ########\n");
		printf("#########   2. �����   ########\n");
		printf("#########   3. ȡ����� ########\n");
		printf("################################\n");
		int choice;
		printf("��ѡ��:>");
		//���������
		char ch;
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			;
		}
		scanf("%d", &choice);
		if (choice != 1 && choice != 2 && choice != 3)
		{
			printf("�����������������\n");
			//��������ѭ��
			continue;
		}
		if (choice == 1)
		{
			//�Ų���
			int judge = FindMine(mine, show, row, col, &win_count);
			if (!judge)
			{
				//����ը������ӡ���׵����飬������
				DisplayBoard(mine, row, col);
				return;
			}
		}
		else
		{			
			if (choice == 2)
			{
				//�����
				MarkMine(mine, show, row, col);
				system("cls");
				DisplayBoard(show, row, col);
			}
			else
			{
				//ȡ�������				
				CancelMark(mine, show, row, col);
				system("cls");
				DisplayBoard(show, row, col);
			}
		}

	}
	if (win_count == row * col - MINE_COUNT||mark_count==MINE_COUNT)
	{
		system("cls");
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
		return;
	}
}


//�Ų���
//����0�������������1�������
int FindMine(char mine[][COLS], char show[][COLS], int row, int col, int* pwin)
{
	int x, y;
	printf("��������Ҫ�Ų������:>");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		if (mine[x][y] == '0')//������
		{
			//����Ѿ���ǣ������Ų�
			if (show[x][y] == '#')
			{
				printf("�õ��Ѿ�����ǣ�����������\n");
				return 1;
			}

			//int count = GetMineCount(mine, x, y);
			//show[x][y] = count + '0';

			system("cls");
			SpreadBlank(mine, show, x, y, pwin);
			DisplayBoard(show, row, col);
			//win++;
		}
		else
		{
			printf("���ź����㱻ը����!\n");			
			return 0;
		}
	}
	else
	{
		printf("���������������������\n");
		return 1;
	}
	
}

//������Χ�׵�����
int GetMineCount(char mine[][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x + 1][y + 1] - 8 * '0');
}


//�����Χû���ף���ȫ��չ��
//չ���հ�����
void SpreadBlank(char mine[][COLS], char show[][COLS], int x, int y, int* pwin)
{
	//�������һȦ��������
	if (x==0||y==0||x==ROWS-1||y==COLS-1)
		return;

	//���show�������治��*�����Ѿ���̽����ģ�ֱ�ӷ��أ���ֹ���ݹ飬����ջ���
	if (show[x][y] != '*')
		return;
	int count = GetMineCount(mine, x, y);
	if (count > 0)
	{
		show[x][y] = count + '0';
		//�����Ų�����
		(*pwin)++;
		return ;
	}
	else
	{
		//mine[x][y] = '2';
		//�˸������ϡ��¡����ҡ����ϣ����£����ϣ�����
		
		show[x][y] = '0';
		//�����Ų�����
		(*pwin)++;
		SpreadBlank(mine, show, x - 1, y, pwin);
		SpreadBlank(mine, show, x + 1, y, pwin);
		SpreadBlank(mine, show, x, y - 1, pwin);
		SpreadBlank(mine, show, x, y + 1, pwin);
		SpreadBlank(mine, show, x - 1, y - 1, pwin);
		SpreadBlank(mine, show, x + 1, y - 1, pwin);
		SpreadBlank(mine, show, x - 1, y + 1, pwin);
		SpreadBlank(mine, show, x + 1, y + 1, pwin);
	}
}

//����׵�
void MarkMine(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x;
	int y;
	printf("��������Ҫ��ǵ�����:>");
	scanf("%d%d", &x, &y);
	//�õ���δ��̽�飬����show����Ϊ��*���ĵ�
	if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y]=='*')
	{
		if (mine[x][y] == '1')
		{
			//��ȷ����׵�
			mark_count++;
		}
		show[x][y] = '!';
	}
	else
	{
		printf("���������������������\n");
	}

}

//ȡ������׵�
void CancelMark(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x;
	int y;
	printf("��������Ҫȡ����ǵ�����:>");
	scanf("%d%d", &x, &y);
	//�õ����ѱ����
	if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y]=='!')
	{
		if (mine[x][y] == '1')
		{
			//�������ȷ����׵㣬������һ
			mark_count--;
		}
		show[x][y] = '*';
	}
	else
	{
		printf("�������������߲��Ǳ���ǵ㣬����������\n");
	}

}
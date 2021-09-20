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
//�Ų���
void FindMine(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	
	//���Ų��λ�õ��ڡ�0����������ʱ����������׳ɹ�
	while (win<(row*col-MINE_COUNT))
	{
		printf("��������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')//������
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				system("cls");
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else
			{
				printf("���ź����㱻ը����!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("���������������������\n");
		}
	}
	if (win == row * col - MINE_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
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

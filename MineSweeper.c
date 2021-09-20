#pragma once

#include"MineSweeper.h"


//数组初始化
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

//显示数组版面
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

//设置雷
void SetMine(char board[][COLS], int row, int col)
{
	int count = MINE_COUNT;
	while (count)
	{
		//随机获得雷的坐标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//判断是否已经是雷
		if (board[x][y] != '1')
		{
			//不是雷，就放
			board[x][y] = '1';
			count--;
		}
	}
}
//排查雷
void FindMine(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	
	//当排查的位置等于‘0’的数量的时候结束，排雷成功
	while (win<(row*col-MINE_COUNT))
	{
		printf("请输入想要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')//不是雷
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				system("cls");
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else
			{
				printf("很遗憾，你被炸死了!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}
	}
	if (win == row * col - MINE_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//查找周围雷的数量
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

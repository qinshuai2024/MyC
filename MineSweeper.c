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

//游戏入口，选择排查或者标记
void PlayGame(char mine[][COLS], char show[][COLS], int row, int col)
{
	int win_count = 0;//排查过的数量

	//排查过的数量等于‘0’的数量的时候 或者 标记正确雷的数量等于设置的雷数量结束，排雷成功
	while (win_count < (row * col - MINE_COUNT) && mark_count < MINE_COUNT)
	{

		printf("################################\n");
		printf("#########   1. 排查雷   ########\n");
		printf("#########   2. 标记雷   ########\n");
		printf("#########   3. 取消标记 ########\n");
		printf("################################\n");
		int choice;
		printf("请选择:>");
		//清除缓冲区
		char ch;
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			;
		}
		scanf("%d", &choice);
		if (choice != 1 && choice != 2 && choice != 3)
		{
			printf("输入错误，请重新输入\n");
			//跳过本次循环
			continue;
		}
		if (choice == 1)
		{
			//排查雷
			int judge = FindMine(mine, show, row, col, &win_count);
			if (!judge)
			{
				//被雷炸死，打印藏雷的数组，并结束
				DisplayBoard(mine, row, col);
				return;
			}
		}
		else
		{			
			if (choice == 2)
			{
				//标记雷
				MarkMine(mine, show, row, col);
				system("cls");
				DisplayBoard(show, row, col);
			}
			else
			{
				//取消标记雷				
				CancelMark(mine, show, row, col);
				system("cls");
				DisplayBoard(show, row, col);
			}
		}

	}
	if (win_count == row * col - MINE_COUNT||mark_count==MINE_COUNT)
	{
		system("cls");
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
		return;
	}
}


//排查雷
//返回0代表结束，返回1代表继续
int FindMine(char mine[][COLS], char show[][COLS], int row, int col, int* pwin)
{
	int x, y;
	printf("请输入想要排查的坐标:>");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		if (mine[x][y] == '0')//不是雷
		{
			//如果已经标记，则不能排查
			if (show[x][y] == '#')
			{
				printf("该点已经被标记，请重新输入\n");
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
			printf("很遗憾，你被炸死了!\n");			
			return 0;
		}
	}
	else
	{
		printf("输入坐标错误，请重新输入\n");
		return 1;
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


//如果周围没有雷，则全部展开
//展开空白区域
void SpreadBlank(char mine[][COLS], char show[][COLS], int x, int y, int* pwin)
{
	//对最外层一圈不做计算
	if (x==0||y==0||x==ROWS-1||y==COLS-1)
		return;

	//如果show数组里面不是*，即已经被探查过的，直接返回，防止死递归，导致栈溢出
	if (show[x][y] != '*')
		return;
	int count = GetMineCount(mine, x, y);
	if (count > 0)
	{
		show[x][y] = count + '0';
		//增加排查数量
		(*pwin)++;
		return ;
	}
	else
	{
		//mine[x][y] = '2';
		//八个方向，上、下、左、右、左上，左下，右上，右下
		
		show[x][y] = '0';
		//增加排查数量
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

//标记雷点
void MarkMine(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x;
	int y;
	printf("请输入想要标记的坐标:>");
	scanf("%d%d", &x, &y);
	//该点需未被探查，即在show数组为‘*’的点
	if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y]=='*')
	{
		if (mine[x][y] == '1')
		{
			//正确标记雷点
			mark_count++;
		}
		show[x][y] = '!';
	}
	else
	{
		printf("输入坐标错误，请重新输入\n");
	}

}

//取消标记雷点
void CancelMark(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x;
	int y;
	printf("请输入想要取消标记的坐标:>");
	scanf("%d%d", &x, &y);
	//该点需已被标记
	if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y]=='!')
	{
		if (mine[x][y] == '1')
		{
			//如果是正确标记雷点，数量减一
			mark_count--;
		}
		show[x][y] = '*';
	}
	else
	{
		printf("输入坐标错误或者不是被标记点，请重新输入\n");
	}

}
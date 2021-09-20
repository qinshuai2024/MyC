#define _CRT_SECURE_NO_WARNINGS 1

#include"MineSweeper.h"

void Menu()
{
	printf("********************************\n");
	printf("*********   1. play     ********\n");
	printf("*********   0. exit     ********\n");
	printf("********************************\n");
}

void MineSweeper()
{
	//为了统一符号，使用字符数组
	char mine[ROWS][COLS] = { 0 };//用于存放雷的数组，0表示没有雷，1表示有雷
	char show[ROWS][COLS] = { 0 };//用于存放打印给用户看的该点周围雷的数量的数组，
	                             //默认为*，输入坐标后其内容为周围雷的数量
	//数组初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');


	//设置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//显示数组版面
	DisplayBoard(show, ROW, COL);

	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			MineSweeper();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}
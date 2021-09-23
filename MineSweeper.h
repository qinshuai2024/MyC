#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 9  //扫雷地图的数组的行
#define COL 9  //扫雷地图的数组的行

#define ROWS 11    //真实数组的行，为了方便查找类的数量，这样的话不用判断访问数组是否越界
#define COLS 11    //真实数组的行，多加一圈

#define MINE_COUNT 9 //设置雷的数量


int mark_count;//标记正确的数量


//数组初始化
void InitBoard(char board[][COLS], int row, int col, char ch);

//显示数组版面
void DisplayBoard(char board[][COLS], int row, int col);

//设置雷
void SetMine(char board[][COLS], int row, int col);

//游戏入口，选择排查或者标记
void PlayGame(char mine[][COLS], char show[][COLS], int row, int col);

//排查雷
//返回0代表结束，返回1代表继续
int FindMine(char mine[][COLS], char show[][COLS], int row, int col, int* pwin);

//查找周围雷的数量
int GetMineCount(char mine[][COLS], int x, int y);

//如果周围没有雷，则全部展开
//展开空白区域
void SpreadBlank(char mine[][COLS], char show[][COLS], int x, int y, int* pwin);

//标记雷点
void MarkMine(char mine[][COLS], char show[][COLS], int row, int col);
//取消标记雷点
void CancelMark(char mine[][COLS], char show[][COLS], int row, int col);





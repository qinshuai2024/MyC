#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 9  //ɨ�׵�ͼ���������
#define COL 9  //ɨ�׵�ͼ���������

#define ROWS 11    //��ʵ������У�Ϊ�˷��������������������Ļ������жϷ��������Ƿ�Խ��
#define COLS 11    //��ʵ������У����һȦ

#define MINE_COUNT 9 //�����׵�����


//�����ʼ��
void InitBoard(char board[][COLS], int row, int col, char ch);

//��ʾ�������
void DisplayBoard(char board[][COLS], int row, int col);

//������
void SetMine(char board[][COLS], int row, int col);

//�Ų���
void FindMine(char mine[][COLS], char show[][COLS], int row, int col);

//������Χ�׵�����
int GetMineCount(char mine[][COLS], int x, int y);

//�����Χû���ף���ȫ��չ��


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


int mark_count;//�����ȷ������


//�����ʼ��
void InitBoard(char board[][COLS], int row, int col, char ch);

//��ʾ�������
void DisplayBoard(char board[][COLS], int row, int col);

//������
void SetMine(char board[][COLS], int row, int col);

//��Ϸ��ڣ�ѡ���Ų���߱��
void PlayGame(char mine[][COLS], char show[][COLS], int row, int col);

//�Ų���
//����0�������������1�������
int FindMine(char mine[][COLS], char show[][COLS], int row, int col, int* pwin);

//������Χ�׵�����
int GetMineCount(char mine[][COLS], int x, int y);

//�����Χû���ף���ȫ��չ��
//չ���հ�����
void SpreadBlank(char mine[][COLS], char show[][COLS], int x, int y, int* pwin);

//����׵�
void MarkMine(char mine[][COLS], char show[][COLS], int row, int col);
//ȡ������׵�
void CancelMark(char mine[][COLS], char show[][COLS], int row, int col);





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
	//Ϊ��ͳһ���ţ�ʹ���ַ�����
	char mine[ROWS][COLS] = { 0 };//���ڴ���׵����飬0��ʾû���ף�1��ʾ����
	char show[ROWS][COLS] = { 0 };//���ڴ�Ŵ�ӡ���û����ĸõ���Χ�׵����������飬
	                             //Ĭ��Ϊ*�����������������Ϊ��Χ�׵�����
	//�����ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');


	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//��ʾ�������
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			MineSweeper();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}
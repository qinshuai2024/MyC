//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
////ʵ�ֲ�������Ϸ
//
//void menu()
//{
//	printf("������ѡ�\n");
//	printf("***********************************\n");
//	printf("*******  1.play             *******\n");
//	printf("*******  0.exit             *******\n");
//	printf("***********************************\n");
//
//}
//void game()
//{
//	int n = rand() % 100 + 1;
//	int input;
//	while (1)
//	{
//		printf("���������������ݣ�\n");
//		scanf("%d", &input);
//
//		if (input > n)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			if (input < n)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("��ϲ�㣬�¶���\n");
//				break;
//			}
//		}
//	}
//	Sleep(1000);
//	system("cls");
//
//}
//
//int main()
//{
//	int choice;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		
//		menu();
//		
//		scanf("%d", &choice);
//		switch (choice)
//		{
//
//		case 1:
//			system("cls");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			Sleep(500);
//			break;
//		default:
//			printf("����������������룺\n");
//			break;
//		}
//
//	} while (choice);
//
//	return 0;
//}
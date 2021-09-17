//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
////实现猜数字游戏
//
//void menu()
//{
//	printf("请输入选项：\n");
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
//		printf("请输入你猜想的数据：\n");
//		scanf("%d", &input);
//
//		if (input > n)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			if (input < n)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了\n");
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
//			printf("退出游戏\n");
//			Sleep(500);
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
//			break;
//		}
//
//	} while (choice);
//
//	return 0;
//}
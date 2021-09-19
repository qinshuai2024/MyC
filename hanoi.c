//#define _CRT_SECURE_NO_WARNINGS 1
//
////汉诺塔问题，把数组arr1中的元素（从大到小排列）移到arr3中
//#include<stdio.h>
//#define MAX_NUM 10
//
////void Hanoi(int n, int* arr1, int* arr2, int* arr3)
////{
////	if (n == MAX_NUM)
////	{
////		arr3[n] = arr1[n];//只有一个数，直接移动到arr3
////	}
////	else
////	{
////		Hanoi(n + 1,arr1,arr3,arr2 );//将上面MAX_NUM-n个元素移动到arr2中
////		arr3[n] = arr1[n];//将最后一个移动到arr3
////		Hanoi(n + 1, arr2, arr1, arr3);//将arr2
////	}
////}
////
////
////
////void testhanoi()
////{
////	int arr1[MAX_NUM] = { 0 };
////	int arr2[MAX_NUM] = { 0 };
////	int arr3[MAX_NUM] = { 0 };
////	for (int i = 0; i < MAX_NUM; i++)
////	{
////		arr1[i] = MAX_NUM - i;
////	}
////	Hanoi(0, arr1, arr2, arr3);
////	for (int i = 0; i < MAX_NUM; i++)
////	{
////		printf("%d ", arr1[i]);
////	}
////	printf("\n");
////	for (int i = 0; i < MAX_NUM; i++)
////	{
////		printf("%d ", arr3[i]);
////	}
////}
//
//void Hanoi(int n, char a ,char b ,char c)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", a , c);//只有一个盘子，直接移动到C
//	}
//	else
//	{
//		Hanoi(n - 1,a ,c ,b );//将上面n-1个盘子移动到B中
//		printf("%c->%c\n", a ,c);//将最后一个移动到C
//		Hanoi(n - 1, b, a, c);//将B上的n-1个盘子移到C上
//	}
//}
//
//int main()
//{
//
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//
//	Hanoi(3,a,b,c);
//
//	return 0;
//}
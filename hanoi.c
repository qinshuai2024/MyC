//#define _CRT_SECURE_NO_WARNINGS 1
//
////��ŵ�����⣬������arr1�е�Ԫ�أ��Ӵ�С���У��Ƶ�arr3��
//#include<stdio.h>
//#define MAX_NUM 10
//
////void Hanoi(int n, int* arr1, int* arr2, int* arr3)
////{
////	if (n == MAX_NUM)
////	{
////		arr3[n] = arr1[n];//ֻ��һ������ֱ���ƶ���arr3
////	}
////	else
////	{
////		Hanoi(n + 1,arr1,arr3,arr2 );//������MAX_NUM-n��Ԫ���ƶ���arr2��
////		arr3[n] = arr1[n];//�����һ���ƶ���arr3
////		Hanoi(n + 1, arr2, arr1, arr3);//��arr2
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
//		printf("%c->%c\n", a , c);//ֻ��һ�����ӣ�ֱ���ƶ���C
//	}
//	else
//	{
//		Hanoi(n - 1,a ,c ,b );//������n-1�������ƶ���B��
//		printf("%c->%c\n", a ,c);//�����һ���ƶ���C
//		Hanoi(n - 1, b, a, c);//��B�ϵ�n-1�������Ƶ�C��
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
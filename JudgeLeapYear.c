//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdbool.h>
//判断是否是闰年

//bool IsLeapYear(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2021; i++)
//	{
//		if (IsLeapYear(i))
//		{
//			++count;
//
//			printf("%d ", i);
//			if (count % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

////交换两个整数
//
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//int main()
//{
//
//	int a = 3, b = 4;
//	printf("before swap:a= %d，b= %d\n", a, b);
//	swap(&a, &b);
//	printf("after swap:a= %d，b= %d\n", a, b);
//	return 0;
//}
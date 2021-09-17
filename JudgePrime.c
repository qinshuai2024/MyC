//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
////ÅÐ¶ÏËØÊý
//
//
//bool IsPrime(int x)
//{
//	int k = (int)sqrt(x);
//	if (x == 1 || x == 2)
//	{
//		return true;
//	}
//	else
//	{
//		for (int i = 2; i <= k; i++)
//		{
//			if (x % i == 0)
//			{
//				return false;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int count = 0;
//	for (int i = 101; i < 200; i += 2)
//	{
//		if (IsPrime(i))
//		{
//			++count;
//			printf("%d ", i);
//			if (count % 5 == 0)
//				printf("\n");
//		}
//	}
//	return 0;
//}
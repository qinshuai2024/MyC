#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////第8题：使用指针打印数组内容
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222

//#include<math.h>
//int main()
//{
//	int n = 2;
//	scanf("%d", &n);
//	int sum = 0, num = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		num += 2 * pow(10, i);
//		printf("%d\n", num);
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//另一种方法
//for (i = 0; i < n; i++)
//{
//	tmp = tmp * 10 + a;
//	sum += tmp;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

#include<math.h>
int main()
{
	for (int i = 0; i < 100000; i++)
	{
		int temp = i;
		int count = 1;
		int sum = 0;
		while (temp / 10)
		{
			count++;
			temp = temp / 10;
		}
		temp = i;
		while (temp)
		{
			sum += pow((temp % 10), count);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

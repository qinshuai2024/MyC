#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////编写程序 数一下 1到 100 的所有整数中出现多少个数字9


//
//#include<math.h>
//int main()
//{
//	
//	int acount = 0;
//	for (int i = 1;i <= 100; i++)
//	{
//		int count = 0;
//		int j;
//		for (j = 0;; j++)
//		{
//			if (i / ((int)(pow(10, j))) > 0)
//			{
//				count++;
//			}
//			else
//				break;
//		}
//		int temp = i;
//		for (j = 0; j < count; j++)
//		{
//			if (temp % 10 == 9)
//				acount++;
//			temp /= 10;
//		}
//	}
//	printf("%d\n", acount);
//	
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//
//	int i = 0;
//	int sign = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * sign;
//		sign = -sign;
//	}
//	printf("%f", sum);
//	return 0;
//}


//求10 个整数中最大值

//int main()
//{
//
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//
//}

//在屏幕上输出9 * 9乘法口诀表


//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %2d", j, i, j * i);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。



//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("找到了！\n");
//			break;
//		}
//
//	}
//	if (i > 10)
//		printf("找不到！\n");
//
//	return 0;
//}

/*
二分查找：
 在一个有序的序列中，找某个数据是否在该集合中，如果在打印该数据在集合中的下标，否则打印找不到

 具体找的方式：
  1. 找到数组的中间位置
  2. 检测中间位置的数据是否与要查找的数据key相等
	a: 相等，找到，打印下标，跳出循环
	b: key < arr[mid], 则key可能在arr[mid]的左半侧，继续到左半侧进行二分查找
	c: key > arr[mid], 则key可能在arr[mid]的右半侧，继续到右半侧进行二分查找

	如果找到返回下标，否则继续，直到区间中没有元素时，说明key不在集合中，打印找不到

 易错点：
 1. right的右半侧区间取值，该值决定了后序的写法
 2. while循环的条件是否有等号
 3. 求中间位置的方法，直接相加除2容易造成溢出
 4. 更改left和right的边界时，不确定是否要+1和-1
*/

// 方法一，采用[left, right] 区间
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1; // right位置的数据可以取到

	while (left <= right) // right位置有数据，必须要添加=号
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid - 1; // right位置的数据可以取到，因此right=mid-1
		}
		else if (arr[mid] < key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}

	if (left > right)
		printf("找不到\n");
	return 0;
}


// 方法二，采用[left, right) 区间
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]); // right位置的数据取不到

	while (left < right) // right位置没有数据，此处不需要添加=
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
		}
		else if (arr[mid] < key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}

	if (left >= right)
		printf("找不到\n");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


/////字符串逆序
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char arr[100];
//	memset(arr, 0, sizeof(arr));
//	int i = 0;
//	char ch;
//	while ((ch=getchar()) != '\n')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	arr[i] = '\0';
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len-1;
//
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//	/*printf("%s", arr);*/
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}




////打印菱形
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 7; i++)
//	{
//		for (int j = 1; j <= 13 - 2 * i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (int i = 6; i >= 1; i--)
//	{
//		for (int j = 1; j <= 13 - 2 * i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//#include<stdio.h>
//int drink_soda(int money,int empty_soda)
//{
//	if (money < 1)
//		return 0;
//	money += empty_soda / 2;
//	empty_soda %= 2;	
//	return money + drink_soda(money / 2, money % 2 + empty_soda);
//}
//
//
//int main()
//{
//	
//	int money = 0;
//	scanf("%d", &money);
//	printf("%d\n", drink_soda(money, 0));
//
//	return 0;
//}

//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2,8,89,4,3,5,6,5,2,8,3,42,13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//左边放奇数，右边放偶数
//		while (arr[left] % 2 == 1 && left < right)
//		{
//			left++;
//		}
//
//		while (arr[right] % 2 == 0 && left < right)
//		{
//			right--;
//		}
//		//找到左边不是奇数的，右边不是偶数的，互相交换
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//		left++;
//		right--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

///模拟实现库函数strlen
//#include<stdio.h>
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//size_t my_strlen(const char* arr)
//{
//	const char* ptr = arr;
//	while (*ptr++ != '\0');
//	return ptr - arr - 1;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

////模拟实现库函数strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* sour)
//{
//	assert(dest && sour);
//	char* ptr = dest;
//	while (*ptr++ = *sour++);
//	return dest;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "xxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//void test2()
//{
//	printf("我是最后一个\n");
//}
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int m = 20;
//	//1.
//	//int* const p = &n;
//	//p = &n;
//
//	//2.
//	//const int* p = &m;
//	//*p = n;
//	//p = &n;
//
//	//3.
//	const int* const p = &m;
//	*p = n;
//
//	p = &n;
//
//	return 0;
//}

#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//int ret = ADd(3, 4);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//程序目标：判断字符串s2是否为s1旋转后的结果

#include<stdio.h>
#include<string.h>
#define MAX_NUM 20

int Left(char* arr, char* arr2)
{

	int len = strlen(arr);
	for (int i = 0; i < len; i++)//如果n大于len则重复
	{
		char temp = arr[0];
		arr[0] = arr[len - 1];

		for (int j = len - 1; j > 1; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[1] = temp;
		if (strcmp(arr, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int Right(char* arr, char* arr2)
{

	int len = strlen(arr);
	for (int i = 0; i < len; i++)//如果n大于len则重复
	{
		char temp = arr[0];
		for(int j = 0; j < len-1; j++)
		{
			arr[j] = arr[j + 1];
		}

		arr[len - 1] = temp;
		if (strcmp(arr, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int Judge(char* arr1,char* arr2)
{
	if (Left(arr1,arr2))
	{
		return 1;
	}
	if (Right(arr1, arr2))
	{
		return 1;
	}
	return 0;
}
void test()
{
	char arr1[MAX_NUM] = { 0 };
	char arr2[MAX_NUM] = { 0 };
	printf("请输入第一个字符串：>");
	scanf("%s", arr1);
	printf("请输入用来比较的字符串：>");
	scanf("%s", arr2);
	if (Judge(arr1, arr2))
		printf("是旋转所得\n");
	else
		printf("不是旋转所得\n");
}


int main()
{
	test();
	return 0;
}
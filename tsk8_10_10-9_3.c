#define _CRT_SECURE_NO_WARNINGS 1
//����Ŀ�꣺�ж��ַ���s2�Ƿ�Ϊs1��ת��Ľ��

#include<stdio.h>
#include<string.h>
#define MAX_NUM 20

int Left(char* arr, char* arr2)
{

	int len = strlen(arr);
	for (int i = 0; i < len; i++)//���n����len���ظ�
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
	for (int i = 0; i < len; i++)//���n����len���ظ�
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
	printf("�������һ���ַ�����>");
	scanf("%s", arr1);
	printf("�����������Ƚϵ��ַ�����>");
	scanf("%s", arr2);
	if (Judge(arr1, arr2))
		printf("����ת����\n");
	else
		printf("������ת����\n");
}


int main()
{
	test();
	return 0;
}
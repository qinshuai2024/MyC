#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdbool.h>

bool FindYang(int arr[][3], int num, int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (num == arr[i][j])
				return true;
			if (num < arr[i][j])
				break;
		}
		if (num < arr[i][j])
			break;
	}
	return false;
}
void  test()
{
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
	int num;
	int sz = sizeof(arr) / sizeof(arr[0][0]);
	int row = sz / 3;//行
	int col = 3;//列

	scanf_s("%d", &num);
	
	if (FindYang(arr,num,row,col))
	{
		printf("%d存在于杨氏矩阵\n",num);
	}
	else
		printf("%d不存在于杨氏矩阵\n", num);
}

int main()
{
	test();
	return 0;
}

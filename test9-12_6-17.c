#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////��д���� ��һ�� 1�� 100 �����������г��ֶ��ٸ�����9


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

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

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


//��10 �����������ֵ

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

//����Ļ�����9 * 9�˷��ھ���


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


//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����



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
//			printf("�ҵ��ˣ�\n");
//			break;
//		}
//
//	}
//	if (i > 10)
//		printf("�Ҳ�����\n");
//
//	return 0;
//}

/*
���ֲ��ң�
 ��һ������������У���ĳ�������Ƿ��ڸü����У�����ڴ�ӡ�������ڼ����е��±꣬�����ӡ�Ҳ���

 �����ҵķ�ʽ��
  1. �ҵ�������м�λ��
  2. ����м�λ�õ������Ƿ���Ҫ���ҵ�����key���
	a: ��ȣ��ҵ�����ӡ�±꣬����ѭ��
	b: key < arr[mid], ��key������arr[mid]�����࣬������������ж��ֲ���
	c: key > arr[mid], ��key������arr[mid]���Ұ�࣬�������Ұ����ж��ֲ���

	����ҵ������±꣬���������ֱ��������û��Ԫ��ʱ��˵��key���ڼ����У���ӡ�Ҳ���

 �״�㣺
 1. right���Ұ������ȡֵ����ֵ�����˺����д��
 2. whileѭ���������Ƿ��еȺ�
 3. ���м�λ�õķ�����ֱ����ӳ�2����������
 4. ����left��right�ı߽�ʱ����ȷ���Ƿ�Ҫ+1��-1
*/

// ����һ������[left, right] ����
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1; // rightλ�õ����ݿ���ȡ��

	while (left <= right) // rightλ�������ݣ�����Ҫ���=��
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid - 1; // rightλ�õ����ݿ���ȡ�������right=mid-1
		}
		else if (arr[mid] < key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}

	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}


// ������������[left, right) ����
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]); // rightλ�õ�����ȡ����

	while (left < right) // rightλ��û�����ݣ��˴�����Ҫ���=
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
		}
		else if (arr[mid] < key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}

	if (left >= right)
		printf("�Ҳ���\n");
	return 0;
}
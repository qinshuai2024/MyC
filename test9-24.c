#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

//void Init(int* arr,int n)
//{
//	memset(arr, 0, sizeof(int) * n);
//}
//void Print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10];
//	Init(arr, 10);
//	Print(arr, 10);
//	Reverse(arr, 10);
//	Print(arr, 10);
//
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//
//	printf("hhhh\n");
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("%d\n", *(p-1));
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int* p = &a;
//
//	int** pp = &p;
//
//	printf("%d\n", *p);//�����ü����õ�ָ��ָ��ռ������ֵ
//
//	printf("%d\n", *p); //�Զ���ָ�룬��Ҫ���ν����ò����õ��ʼ��ֵ
//	return 0;
//}
//
//int main()
//{
//	//����һ�����οռ�
//	int* p = (int*)malloc(sizeof(int));
//
//	//�ͷŸÿռ�
//	free(p);
//	//��ʱp��ΪҰָ�룬��Ϊ��ָ��Ŀռ��Ѿ��޷����ʣ�һ����Ҫ�����ÿ�
//	//����ָ���ָ�룬��ֹ�������ó���
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;//��n�ĵ�ַ��ָ�룩ǿ��ת����char* ����
//	int* pi = &n;
//	printf("&n��    %p\n", &n);
//	printf("pc��    %p\n", pc);
//	printf("pc + 1��%p\n", pc + 1);
//	printf("pi��    %p\n", pi);
//	printf("pi + 1��%p\n", pi + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;//��n�ĵ�ַ��ָ�룩ǿ��ת����char* ����
//	int* pi = &n;
//	*pc = 0;//�ı���ָ��ռ��ֵ
//	*pi = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
// int* p = &arr[5];
//int* q = arr;
//
//}



//
//int main()
//{
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr);
//	printf("sizeof(arr)���������������Ĵ�С��%d\n", sz);
//
//	printf("�����׵�ַ��      %p\n", arr);
//	printf("������Ԫ�ص�ַ��  %p\n", &arr[0]);
//	printf("����ĵ�ַ��      %p\n", &arr);
//
//	printf("�����׵�ַ+1��    %p\n", arr + 1);
//	printf("������Ԫ�ص�ַ+1��%p\n", &arr[0] + 1);
//	printf("����ĵ�ַ+1��    %p\n", &arr + 1);
//
//	//������ȷʵ����Ԫ�صĵ�ַ
//	//������2�����⣺
//	//1. sizeof(������)  - �����������������Ԫ�صĵ�ַ���Ǳ�ʾ��������ģ�������������������Ĵ�С����λ�����ֽ�
//	//2. &������ - �����������������Ԫ�صĵ�ַ���Ǳ�ʾ��������ģ��õ�������������ĵ�ַ
//	//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//ȡ�������һ��Ԫ�غ����һ��Ԫ�صĵ�ַ
//	int* start = arr;
//	int* end = &arr[9];
//	printf("%d\n", end - start);
//	return 0;
//}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* arr[10] = { &a,&b,&c };
	for (int i = 0; i < 3 ; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
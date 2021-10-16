#define _CRT_SECURE_NO_WARNINGS 1


#include<string.h>
#include<errno.h>
//int main()
//{
//	//开辟10个整型空间，并用ptr管理
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	//但也许内存不足开辟失败，需要判断一下是否开辟成功
//	if (ptr == NULL)
//	{
//		//失败，打印错误信息，并返回-1（非正常结束）
//		printf("malloc fail!\n");
//
//		printf("%s\n", strerror(errno));//也可使用系统错误码打印错误信息，但需包含头文件
//		return -1;
//	}
//	free(ptr);//释放空间
//	ptr = NULL;//将指针置空，不然为野指针
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)calloc(10, sizeof(int));
//	if (ptr == NULL)
//	{
//		//失败
//		printf("malloc fail!\n");
//		return -1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	//记得释放
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//开辟10个整型大小空间
//	int* ptr = (int *)malloc(sizeof(int)*10);
//	if (ptr == NULL)
//	{
//		exit(-1);
//	}
//	//扩展容量
//
//	//代码1
//	ptr = realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//	//如果申请失败，返回NULL，这个ptr就被赋值为NULL
//	//原来空间就找不到了，造成内存泄露
//
//	//代码2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		//扩容成功，可以将新的空间交给ptr管理,不影响后续使用
//		ptr = p;
//	}
//	else
//	{
//		//扩容失败
//	}
//	//释放空间
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct st
//{
//	int i;
//	int arr[];
//};
//
//int main()
//{
//	struct st* ptr = (struct st*)malloc(sizeof(struct st) + 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		extit(-1);
//	}
//	//使用
//	ptr->i = 10;
//	for (int i = 0; i < 10; i++)
//	{
//		ptr->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr->arr[i]);
//	}
//
//	//若需要扩容
//	//将数组扩容为20个整型大小
//	struct st* temp = (struct st*)realloc(ptr, sizeof(struct st) + 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		extit(-1);
//	}
//	//使用
//
//
//	//释放
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct st
//{
//	int i;
//	int* arr;//用指针代替
//	//在默认对齐数8和指针大小为4的情况下，结构体大小为4+4=8
//};
//
//int main()
//{
//	//开辟一个结构体
//	struct st* s1 = (struct st*)malloc(sizeof(struct st));//创建一个结构体实例
//	//初始化
//	s1->i = 10;
//	//开辟10个整型空间，给arr维护
//	s1->arr = (int*)malioc(sizeof(int) * 10);
//	if (s1->arr == NULL)
//	{
//		//退出
//		exit(-1);
//	}
//	//使用
//
//	//扩容只需给s1->arr扩容即可
//	int* temp = (int*)realloc(s1->arr, sizeof(int) * 20);
//	if (s1->arr == NULL)
//	{
//		//退出
//		exit(-1);
//	}
//
//	//使用
//	
//	//释放，要先释放结构体内部指针指向的空间，然后再释放结构体，否则内部指向的空间无法释放	
//	free(s1->arr);
//	s1->arr = NULL;
//	free(s1);
//	s1 = NULL;
//
//	return 0;
//}

#include<stdio.h>

#define SWAP(n) ((((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1))
//#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)
#define N 0x55555555
int main()
{
	
	int n = 0x55555555;
	int x = SWAP(n);
	printf("%x\n",x);
	return 0;
}
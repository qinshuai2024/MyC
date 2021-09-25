#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

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
//	printf("%d\n", *p);//解引用即可拿到指针指向空间里面的值
//
//	printf("%d\n", *p); //对二级指针，需要两次解引用才能拿到最开始的值
//	return 0;
//}
//
//int main()
//{
//	//开辟一个整形空间
//	int* p = (int*)malloc(sizeof(int));
//
//	//释放该空间
//	free(p);
//	//此时p即为野指针，因为它指向的空间已经无法访问，一般需要将其置空
//	//将其指向空指针，防止后续调用出错
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;//将n的地址（指针）强制转换成char* 类型
//	int* pi = &n;
//	printf("&n：    %p\n", &n);
//	printf("pc：    %p\n", pc);
//	printf("pc + 1：%p\n", pc + 1);
//	printf("pi：    %p\n", pi);
//	printf("pi + 1：%p\n", pi + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;//将n的地址（指针）强制转换成char* 类型
//	int* pi = &n;
//	*pc = 0;//改变它指向空间的值
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
//	printf("sizeof(arr)计算的是整个数组的大小：%d\n", sz);
//
//	printf("数组首地址：      %p\n", arr);
//	printf("数组首元素地址：  %p\n", &arr[0]);
//	printf("数组的地址：      %p\n", &arr);
//
//	printf("数组首地址+1：    %p\n", arr + 1);
//	printf("数组首元素地址+1：%p\n", &arr[0] + 1);
//	printf("数组的地址+1：    %p\n", &arr + 1);
//
//	//数组名确实是首元素的地址
//	//但是有2个例外：
//	//1. sizeof(数组名)  - 这里的数组名不是首元素的地址，是表示整个数组的，这里计算的是整个数组的大小，单位还是字节
//	//2. &数组名 - 这里的数组名不是首元素的地址，是表示整个数组的，拿到的是整个数组的地址
//	//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//取出数组第一个元素和最后一个元素的地址
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
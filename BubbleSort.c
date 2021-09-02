#include<stdio.h>
#include<string.h>
void swap(char* buf1, char* buf2,size_t width)
{
	for (size_t i = 0; i < width; i++)
	{
		//交换的是字符指针指向的一个字节，比如int占4字节，需要四次
		//9-> 09 00 00 00   8-> 08 00 00 00
		//一对一对的交换
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void BubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void*, const void*))
{
	size_t i, j;
	for (i = 0; i < num-1; i++)
	{
		for (j = 0; j < num-1-i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int compare_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//交换整形测试
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz, sizeof(arr[0]), compare_int);
	Print(arr, sz);
}
//交换结构体测试
struct Stu
{
	char name[20];
	int age;
};
int compare_StuChar(const void* e1, const void* e2)
{
	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
}
int compare_Stuint(const void* e1, const void* e2)
{
	return (*(struct Stu*)e1).age-(*(struct Stu*)e2).age;
}
void Print2(struct Stu* arr, int sz)
{
	//for (int i = 0; i < sz; i++)
	//{
	//	printf(" %s   ", arr[i].name);
	//	printf("%d", arr[i].age);
	//	printf("\n ");
	//}
	//
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
		printf("%d ", arr[i].age);
		printf("\n");
	}
	printf("\n");
}
void test2()
{
	struct Stu arr[3] = { {"张三",10},{"李四",19},{"王二",17} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//按名字
	printf("按名字\n");
	BubbleSort(arr, sz, sizeof(arr[0]), compare_StuChar);
	Print2(arr, sz);
	//按年龄
	printf("按年龄\n");
	BubbleSort(arr, sz, sizeof(arr[0]), compare_Stuint);
	Print2(arr, sz);
}
int main()
{
	//测试整形排序
	test1();
	//测试结构体排序
	test2();
	return 0;
}

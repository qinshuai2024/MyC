#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Print1(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, 4, compare_int);
	Print1(arr, sz);
}

int compare_char(const void* e1,const void* e2)
{
	return (int)*(char*)e1 - (int)*(char*)e2;
}
void Print2(char* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}
void test2()
{
	char arr[10] = { 'c','d','f','s','r','i','t','u','p'};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), compare_char);
	Print2(arr, sz);
}

//测试结构体

struct Stu
{
	char name[20];
	int age;
};
int compare_Stu_name(const void* e1, const void* e2)
{
	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
}
int compare_Stu_age(const void* e1, const void* e2)
{
	return (*(struct Stu*)e1).age-(*(struct Stu*)e2).age;
}
void Print3(struct Stu* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
		printf("%d ", arr[i].age);
		printf("\n");
	}

}
void test3()
{
	struct Stu arr[3] = { {"张三",18},{"王五",20},{"李四",21} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//按名字
	qsort(arr, sz, sizeof(arr[0]), compare_Stu_name);
	Print3(arr, sz);
}
void test4()
{
	struct Stu arr[3] = { {"张三",18},{"王五",20},{"李四",21}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//按年龄
	qsort(arr, sz, sizeof(arr[0]), compare_Stu_age);
	Print3(arr, sz);
}
int main()
{
	printf("测试整型元素排序：\n");
	test1();
	printf("测试字符元素排序：\n");
	test2();
	printf("测试结构体内字符元素排序：\n");
	test3();
	printf("测试结构体内整型元素排序：\n");
	test4();
	return 0;
}
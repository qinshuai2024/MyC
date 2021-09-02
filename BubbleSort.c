#include<stdio.h>
#include<string.h>
void swap(char* buf1, char* buf2,size_t width)
{
	for (size_t i = 0; i < width; i++)
	{
		//���������ַ�ָ��ָ���һ���ֽڣ�����intռ4�ֽڣ���Ҫ�Ĵ�
		//9-> 09 00 00 00   8-> 08 00 00 00
		//һ��һ�ԵĽ���
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

//�������β���
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz, sizeof(arr[0]), compare_int);
	Print(arr, sz);
}
//�����ṹ�����
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
	struct Stu arr[3] = { {"����",10},{"����",19},{"����",17} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//������
	printf("������\n");
	BubbleSort(arr, sz, sizeof(arr[0]), compare_StuChar);
	Print2(arr, sz);
	//������
	printf("������\n");
	BubbleSort(arr, sz, sizeof(arr[0]), compare_Stuint);
	Print2(arr, sz);
}
int main()
{
	//������������
	test1();
	//���Խṹ������
	test2();
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1


/////�ַ�������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char arr[100];
//	memset(arr, 0, sizeof(arr));
//	int i = 0;
//	char ch;
//	while ((ch=getchar()) != '\n')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	arr[i] = '\0';
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len-1;
//
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//	/*printf("%s", arr);*/
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}




////��ӡ����
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 7; i++)
//	{
//		for (int j = 1; j <= 13 - 2 * i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (int i = 6; i >= 1; i--)
//	{
//		for (int j = 1; j <= 13 - 2 * i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//#include<stdio.h>
//int drink_soda(int money,int empty_soda)
//{
//	if (money < 1)
//		return 0;
//	money += empty_soda / 2;
//	empty_soda %= 2;	
//	return money + drink_soda(money / 2, money % 2 + empty_soda);
//}
//
//
//int main()
//{
//	
//	int money = 0;
//	scanf("%d", &money);
//	printf("%d\n", drink_soda(money, 0));
//
//	return 0;
//}

//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2,8,89,4,3,5,6,5,2,8,3,42,13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//��߷��������ұ߷�ż��
//		while (arr[left] % 2 == 1 && left < right)
//		{
//			left++;
//		}
//
//		while (arr[right] % 2 == 0 && left < right)
//		{
//			right--;
//		}
//		//�ҵ���߲��������ģ��ұ߲���ż���ģ����ཻ��
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//		left++;
//		right--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

///ģ��ʵ�ֿ⺯��strlen
//#include<stdio.h>
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//size_t my_strlen(const char* arr)
//{
//	const char* ptr = arr;
//	while (*ptr++ != '\0');
//	return ptr - arr - 1;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

////ģ��ʵ�ֿ⺯��strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* sour)
//{
//	assert(dest && sour);
//	char* ptr = dest;
//	while (*ptr++ = *sour++);
//	return dest;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "xxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//void test2()
//{
//	printf("�������һ��\n");
//}
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int m = 20;
//	//1.
//	//int* const p = &n;
//	//p = &n;
//
//	//2.
//	//const int* p = &m;
//	//*p = n;
//	//p = &n;
//
//	//3.
//	const int* const p = &m;
//	*p = n;
//
//	p = &n;
//
//	return 0;
//}

#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//int ret = ADd(3, 4);

	return 0;
}
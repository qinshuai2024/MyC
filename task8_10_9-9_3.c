//#define _CRT_SECURE_NO_WARNINGS 1
////程序目标：字符串左旋
//
//#include<stdio.h>
//#include<string.h>
//#define MAX_NUM 20
//
//void test()
//{
//	char arr[20] = {0};
//	scanf("%s", arr);
//	int len = strlen(arr);
//	/*printf("%d\n", len);*/
//	int n;//存放需要左旋字符的个数
//	printf("需要左旋字符的个数:>");
//	scanf("%d", &n);
//	for (int i = 0; i < (n % len); i++)//如果n大于len则重复
//	{
//		char temp = arr[0];
//		arr[0] = arr[len - 1];
//		
//		for (int j = len - 1; j > 1; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[1] = temp;
//	}
//	printf("%s\n", arr);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}
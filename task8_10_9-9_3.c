//#define _CRT_SECURE_NO_WARNINGS 1
////����Ŀ�꣺�ַ�������
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
//	int n;//�����Ҫ�����ַ��ĸ���
//	printf("��Ҫ�����ַ��ĸ���:>");
//	scanf("%d", &n);
//	for (int i = 0; i < (n % len); i++)//���n����len���ظ�
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
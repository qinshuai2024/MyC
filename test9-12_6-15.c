//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>



//��7��

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if(b < c)
//			{ 
//				int temp = b;
//				b = c;
//				c = temp;
//
//			}
//		}
//		else
//		{
//			int temp = a;
//			a = c;
//			c = b;
//			b = temp;
//		}
//	}
//	else
//	{
//		if (a > c)
//		{
//			int temp = a;
//			a = b;
//			b = temp;
//		}
//		else
//		{
//			if (b > c)
//			{
//				int temp = a;
//				a = b;
//				b = c;
//				c = temp;
//			}
//			else
//			{
//				int temp = a;
//				a = c;
//				c = temp;
//			}
//		}
//	}
//	printf("�Ӵ�С����Ϊ��%d > %d > %d\n", a, b, c);
//	return 0;
//}

//��㷽��

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//
//
//	printf("�Ӵ�С����Ϊ��%d > %d > %d\n", a, b, c);
//	return 0;
//}


////��8��
//
//int main()
//{
//	int i = 1,count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%3d", i);
//			++count;
//			if (count % 6 == 0)
//			{
//				printf("\n");
//			}
//		}
//
//	}
//
//	return 0;
//}

////�ھ��⣬շת�����
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int temp = 1;
//	while (temp)
//	{
//		if (a < b)
//		{
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("���Լ��Ϊ��%d", a);
//	return 0;
//}

//���Լ�һ��

//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}

////�ж��Ƿ�Ϊ����
//
//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%5d", i);
//			count++;
//			if (count % 10 == 0)
//				printf("\n");
//		}
//	}
//	return 0;
//}

////��ӡ����
//#include<math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		int k = (int)sqrt(i);
//		int j = 2;
//		for (; j <= k; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > k)
//		{
//			printf("%4d", i);
//			count++;
//			if (count % 5 == 0)
//				printf("\n");
//		}
//	}
//	return 0;
//}
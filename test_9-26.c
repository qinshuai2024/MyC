#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int calc_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m, n;
//	while (scanf("%d %d", &m, &n) == 2)
//	{
//		printf("%d\n", calc_diff_bit(m, n));
//	}
//	return 0;
//}

////ͳ�������洢���ڴ��ж�����1�ĸ���
//
////����1��
//int dif_count1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
////����2��
////ʹ���޷���������Ϊ����������ԭ���ĸ���ת�����䲹���Ӧ��������
//int dif_count2(unsigned int n)
//{
//	
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
////����3��
//
////һ����������1100�����ұ��������λ�Ǵ������ұߵ�һ��1��
////��ȥ1�󣬵���λ���0�����������λ0�����1����ǰ���1���ֲ��䣬
////��˵õ��Ľ����1011.���Ƿ��ּ�1�Ľ���ǰ����ұߵ�һ��1��ʼ������λ��ȡ���ˡ�
////���ʱ����������ٰ�ԭ���������ͼ�ȥ1֮��Ľ���������㣬
////��ԭ���������ұ�һ��1��һλ��ʼ����λ������0����1100 & 1011 = 1000.Ҳ����˵��
////��һ��������ȥ1���ٺ�ԭ�����������㣬
////��Ѹ��������ұ�һ��1���0.��ôһ�������Ķ������ж��ٸ�1���Ϳ��Խ��ж��ٴ������Ĳ�����
//
//int dif_count3(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ÿִ��һ�Σ�����ȥ��n�Ķ����Ƶ�һ��1(���ұ߿�ʼ)
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", dif_count1(n));
//	printf("%d\n", dif_count2(n));
//	printf("%d\n", dif_count3(n));
//
//	return 0;
//}


////���������������в�ͬλ�ĸ���
//
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int count = 0;
//	int temp = n ^ m;
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////��ӡ���������Ƶ�����λ��ż��λ
//
//int main()
//{
//	int n=1;
//	//scanf("%d", &n);
//
//	//�ȴ�ӡż��λ���Ӽ�����31λ����1��λ�����㣬��Ϊ1�����ӡ1��Ϊ0���ӡ0
//	for (int i = 31; i > 0; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf(" ż��λ\n");
//	//ͬ���ӡ����λ
//	for (int i = 30; i >= 0; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf(" ����λ\n");
//
//	return 0;
//
//}

////����������������������ʱ������
//
//
//int main()
//{
//
//	int n = 3, m = 5;
//	printf("%d %d\n", n, m);
//
//	m = n ^ m;
//	n = m ^ n;
//	m = m ^ n;
//	printf("%d %d", n, m);
//	return 0;
//}


//BC105-��������ж�

int main()
{
	////int arr1[][100] = { 0 };
	////int arr1[][100] = { 0 };

	//int n = 0, m = 0;
	//scanf("%d%d", &n, &m);
	//int arr1[n][m] = { 0 };
	//int arr1[n][m] = { 0 }; 


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////��8�⣺ʹ��ָ���ӡ��������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//
//���磺2 + 22 + 222 + 2222 + 22222

//#include<math.h>
//int main()
//{
//	int n = 2;
//	scanf("%d", &n);
//	int sum = 0, num = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		num += 2 * pow(10, i);
//		printf("%d\n", num);
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��һ�ַ���
//for (i = 0; i < n; i++)
//{
//	tmp = tmp * 10 + a;
//	sum += tmp;
//}

//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

#include<math.h>
int main()
{
	for (int i = 0; i < 100000; i++)
	{
		int temp = i;
		int count = 1;
		int sum = 0;
		while (temp / 10)
		{
			count++;
			temp = temp / 10;
		}
		temp = i;
		while (temp)
		{
			sum += pow((temp % 10), count);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int main()
//{
//	int n = -20;
//	unsigned int m = 10;
//	if ((n + m) > 0)
//	{
//		printf("unsigned int\n");
//	}
//	if ((m + n) < 0)
//	{
//		printf("int\n");
//	}
//	return 0;
//}

//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//����
//int main()
//{
//	int arr[30] = { 0 };
//	int n = 20;
//	for (int i = 0; i < n; i++)
//	{
//		arr[0] = arr[i] = 1;
//		int pre = arr[0];//������һ�е�ǰһ��
//		int sur = arr[1];//������һ�еĵ�ǰһ��
//		for (int j = 1; j < i; j++)
//		{
//			arr[j] = pre + sur;
//			pre = sur;//��һ�εĵ�ǰ����һ�ε�ǰһ��
//			sur = arr[j + 1];
//		}
//
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void BubbleSort(int array[], int size)
//{
//    // ���ѭ������ð�����������
//    // size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
//    for (int i = 0; i < size - 1; ++i)
//    {
//        int isChange = 0;
//        // ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
//        for (int j = 1; j < size - i; ++j)
//        {
//            if (array[j - 1] > array[j])
//            {
//                int temp = array[j - 1];
//                array[j - 1] = array[j];
//                array[j] = temp;
//
//                isChange = 1;   // �������ð�ݽ������ݽ����ˣ�˵�����λ�������ģ��ͽ�isChange����Ϊ1
//            }
//        }
//
//        // �������ð���У�Ԫ��û�н������򱾴ο�ʼð��ʱ�������Ѿ������ˣ������ð�ݿ��Բ��ý�����
//        if (!isChange)
//            return;
//    }
//}


////�Ӵ�С
//void BubbleSort(int arr[], int n)
//{
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		int signal = 0;
//		for (int j = n-1; j > i; j--)
//		{
//			if (arr[j - 1] < arr[j])
//			{
//				int temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//				signal = 1;
//			}
//		}
//		if (!signal)
//			break;
//	}
//}
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	BubbleSort(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 2,2,2,2,2,2,2,2,2,2 };
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
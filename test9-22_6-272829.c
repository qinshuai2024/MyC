#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void BubbleSort(int array[], int size)
//{
//    // 外层循环控制冒泡排序的趟数
//    // size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
//    for (int i = 0; i < size - 1; ++i)
//    {
//        int isChange = 0;
//        // 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
//        for (int j = 1; j < size - i; ++j)
//        {
//            if (array[j - 1] > array[j])
//            {
//                int temp = array[j - 1];
//                array[j - 1] = array[j];
//                array[j] = temp;
//
//                isChange = 1;   // 如果本次冒泡进行数据交换了，说明本次还是无序的，就将isChange设置为1
//            }
//        }
//
//        // 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
//        if (!isChange)
//            return;
//    }
//}


////从大到小
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
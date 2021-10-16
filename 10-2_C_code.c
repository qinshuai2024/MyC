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

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……
//int main()
//{
//	int arr[30] = { 0 };
//	int n = 20;
//	for (int i = 0; i < n; i++)
//	{
//		arr[0] = arr[i] = 1;
//		int pre = arr[0];//保留上一行的前一个
//		int sur = arr[1];//保留上一行的当前一个
//		for (int j = 1; j < i; j++)
//		{
//			arr[j] = pre + sur;
//			pre = sur;//这一次的当前是下一次的前一个
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

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
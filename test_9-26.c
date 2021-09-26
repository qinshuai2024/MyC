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

////统计整数存储在内存中二进制1的个数
//
////方法1：
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
////方法2：
////使用无符号整型作为参数，即将原来的负数转换成其补码对应的正整数
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
////方法3：
//
////一个二进制数1100，从右边数起第三位是处于最右边的一个1。
////减去1后，第三位变成0，它后面的两位0变成了1，而前面的1保持不变，
////因此得到的结果是1011.我们发现减1的结果是把最右边的一个1开始的所有位都取反了。
////这个时候如果我们再把原来的整数和减去1之后的结果做与运算，
////从原来整数最右边一个1那一位开始所有位都会变成0。如1100 & 1011 = 1000.也就是说，
////把一个整数减去1，再和原整数做与运算，
////会把该整数最右边一个1变成0.那么一个整数的二进制有多少个1，就可以进行多少次这样的操作。
//
//int dif_count3(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//每执行一次，可以去掉n的二进制的一个1(从右边开始)
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


////求两个数二进制中不同位的个数
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

////打印整数二进制的奇数位和偶数位
//
//int main()
//{
//	int n=1;
//	//scanf("%d", &n);
//
//	//先打印偶数位，从即右移31位后与1按位与运算，若为1，则打印1，为0则打印0
//	for (int i = 31; i > 0; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf(" 偶数位\n");
//	//同理打印奇数位
//	for (int i = 30; i >= 0; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf(" 奇数位\n");
//
//	return 0;
//
//}

////交换两个变量（不创建临时变量）
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


//BC105-矩阵相等判断

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
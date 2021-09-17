#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//第2题：打印一个整数的每一位

void PrintNumber(int n)
{
	if (n > 9)
	{
		PrintNumber(n / 10);
		printf("%d ", n % 10);
	}
	else
	{
		printf("%d ", n);
	}
}

void test2()
{
	int n = 123456789;
	PrintNumber(n);
}



//第3题：递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
int RFactorial(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	else
		return n * RFactorial(n - 1);
}
int Factorial(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
void test3()
{
	int n = 6;
	printf("递归：%d\n",RFactorial(n));
	printf("非递归：%d\n", Factorial(n));
}

//第4题：递归和非递归分别实现strlen

//递归
int my_rstrlen(char* pc)
{
	if (*pc == '\0')
		return 0;
	else
	{
		return 1 + my_rstrlen(pc + 1);
	}
}

//非递归
int my_strlen(char* pc)
{
	int len = 0;
	while (*pc != '\0')
	{
		++len;
		++pc;
	}
	return len;
}
void test4()
{
	char* pc = "abcdef";
	printf("递归：%d\n", my_rstrlen(pc));
	printf("非递归：%d\n", my_strlen(pc));

}

//第5题：编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

void test5()
{
	char string[] = "abcdef";
	printf("%s\n", string);
	reverse_string(string);

	printf("%s\n", string);


}

//第6题：计算一个数的每位之和（递归实现）

int SumNum(int n)
{
	if (n > 9)
	{
		return n % 10 + SumNum(n / 10);
	}
	else
	{
		return n;
	}
}
void test6()
{
	int num = 1729;
	printf("%d\n", SumNum(num));
}

//第7题：递归实现n的k次方
int my_pow(int n, int k)
{
	if (k == 0)
		return 1;
	else
		return n*my_pow(n, k - 1);
}

void test7()
{
	int n = 3;
	int k = 4;
	printf("%d\n", my_pow(n, k));
}


//第8题：递归和非递归分别实现求第n个斐波那契数

//递归
int RFibonacci(int k)
{
	if (k == 1 || k == 2)
		return 1;
	else
		return RFibonacci(k - 1) + RFibonacci(k - 2);
}


//非递归
int Fibonacci(int k)
{
	int a1 = 1;
	int a2 = 1;
	int a3 = 2;

	if (k == 1 || k == 2)
		return 1;
	else
	{
		for (int i = 3; i <= k; i++)
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
		}
	}
	return a3;
}

void test8()
{
	int k = 2;
	printf("%d\n", RFibonacci(k));
	printf("%d\n", Fibonacci(k));

}
int main()
{
	/*test2();*/

	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	test8();
	return 0;
}
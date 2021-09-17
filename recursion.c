#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��2�⣺��ӡһ��������ÿһλ

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



//��3�⣺�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ�
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
	printf("�ݹ飺%d\n",RFactorial(n));
	printf("�ǵݹ飺%d\n", Factorial(n));
}

//��4�⣺�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ݹ�
int my_rstrlen(char* pc)
{
	if (*pc == '\0')
		return 0;
	else
	{
		return 1 + my_rstrlen(pc + 1);
	}
}

//�ǵݹ�
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
	printf("�ݹ飺%d\n", my_rstrlen(pc));
	printf("�ǵݹ飺%d\n", my_strlen(pc));

}

//��5�⣺��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

//��6�⣺����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

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

//��7�⣺�ݹ�ʵ��n��k�η�
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


//��8�⣺�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//�ݹ�
int RFibonacci(int k)
{
	if (k == 1 || k == 2)
		return 1;
	else
		return RFibonacci(k - 1) + RFibonacci(k - 2);
}


//�ǵݹ�
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
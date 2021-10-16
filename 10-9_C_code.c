//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr1[5000] = { 0 };
//    int arr2[5000] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//
//    int arr3[10000] = { 0 };
//    int i = 0, j = 0, count = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[count++] = arr1[i];
//            i++;
//        }
//        else
//        {
//            arr3[count++] = arr2[j];
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            arr3[count++] = arr2[j];
//        }
//    }
//    if (j == m)
//    {
//        for (; i < n; i++)
//        {
//            arr3[count++] = arr1[i];
//        }
//    }
//    for (int i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", test);
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%p\n", &test);
//
//	//代码1
//	(*(void (*)())0)();
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//	return 0;
//}

//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//void test(int (*pfun)(int, int))
//{
//	int ret = pfun(3, 4);//通过函数指针去调用其他函数
//	printf("%d\n", ret);
//}
//int main()
//{
//	test(Add);//将函数的地址作为参数
//	test(Sub);
//	return 0;
//}
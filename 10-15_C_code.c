#define _CRT_SECURE_NO_WARNINGS 1


#include<string.h>
#include<errno.h>
//int main()
//{
//	//����10�����Ϳռ䣬����ptr����
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	//��Ҳ���ڴ治�㿪��ʧ�ܣ���Ҫ�ж�һ���Ƿ񿪱ٳɹ�
//	if (ptr == NULL)
//	{
//		//ʧ�ܣ���ӡ������Ϣ��������-1��������������
//		printf("malloc fail!\n");
//
//		printf("%s\n", strerror(errno));//Ҳ��ʹ��ϵͳ�������ӡ������Ϣ���������ͷ�ļ�
//		return -1;
//	}
//	free(ptr);//�ͷſռ�
//	ptr = NULL;//��ָ���ÿգ���ȻΪҰָ��
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)calloc(10, sizeof(int));
//	if (ptr == NULL)
//	{
//		//ʧ��
//		printf("malloc fail!\n");
//		return -1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	//�ǵ��ͷ�
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//����10�����ʹ�С�ռ�
//	int* ptr = (int *)malloc(sizeof(int)*10);
//	if (ptr == NULL)
//	{
//		exit(-1);
//	}
//	//��չ����
//
//	//����1
//	ptr = realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)
//	//�������ʧ�ܣ�����NULL�����ptr�ͱ���ֵΪNULL
//	//ԭ���ռ���Ҳ����ˣ�����ڴ�й¶
//
//	//����2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		//���ݳɹ������Խ��µĿռ佻��ptr����,��Ӱ�����ʹ��
//		ptr = p;
//	}
//	else
//	{
//		//����ʧ��
//	}
//	//�ͷſռ�
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct st
//{
//	int i;
//	int arr[];
//};
//
//int main()
//{
//	struct st* ptr = (struct st*)malloc(sizeof(struct st) + 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		extit(-1);
//	}
//	//ʹ��
//	ptr->i = 10;
//	for (int i = 0; i < 10; i++)
//	{
//		ptr->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr->arr[i]);
//	}
//
//	//����Ҫ����
//	//����������Ϊ20�����ʹ�С
//	struct st* temp = (struct st*)realloc(ptr, sizeof(struct st) + 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		extit(-1);
//	}
//	//ʹ��
//
//
//	//�ͷ�
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct st
//{
//	int i;
//	int* arr;//��ָ�����
//	//��Ĭ�϶�����8��ָ���СΪ4������£��ṹ���СΪ4+4=8
//};
//
//int main()
//{
//	//����һ���ṹ��
//	struct st* s1 = (struct st*)malloc(sizeof(struct st));//����һ���ṹ��ʵ��
//	//��ʼ��
//	s1->i = 10;
//	//����10�����Ϳռ䣬��arrά��
//	s1->arr = (int*)malioc(sizeof(int) * 10);
//	if (s1->arr == NULL)
//	{
//		//�˳�
//		exit(-1);
//	}
//	//ʹ��
//
//	//����ֻ���s1->arr���ݼ���
//	int* temp = (int*)realloc(s1->arr, sizeof(int) * 20);
//	if (s1->arr == NULL)
//	{
//		//�˳�
//		exit(-1);
//	}
//
//	//ʹ��
//	
//	//�ͷţ�Ҫ���ͷŽṹ���ڲ�ָ��ָ��Ŀռ䣬Ȼ�����ͷŽṹ�壬�����ڲ�ָ��Ŀռ��޷��ͷ�	
//	free(s1->arr);
//	s1->arr = NULL;
//	free(s1);
//	s1 = NULL;
//
//	return 0;
//}

#include<stdio.h>

#define SWAP(n) ((((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1))
//#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)
#define N 0x55555555
int main()
{
	
	int n = 0x55555555;
	int x = SWAP(n);
	printf("%x\n",x);
	return 0;
}
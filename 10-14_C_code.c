//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    //union
//    //{
//    //    short k;
//    //    char i[2];
//    //}*s, a;
//    //s = &a;
//    //s->i[0] = 0x39;
//    //s->i[1] = 0x38;
//    //printf(" %x \n", a.k);
//    int a = 0x11223344;
//    printf(" %x \n", a);
//    return 0;
//}
//#include<stdio.h>
//
//struct st
//{
//	int data;
//	char ch;
//	int a;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct st));
//	return 0;
//}
//#include <stdio.h>
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ8
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //���ṹ��ռ�ռ�ô�
//	print2(&s); //����ַ�ռ�ռ��С
//	return 0;
//}

//#include<stdio.h>
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};

//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;	
//};
//
//
//int check_sys()
//{
//	union Un un;
//	un.i = 1;
//	//�͵�ַ            �ߵ�ַ
//	//С�˴洢 01 00 00 00
//	//��˴洢 00 00 00 01
//	return un.c;//���ص�һ���ֽڵ�ֵ
//}
//int main()
//{
//	printf("%d\n", check_sys());
//	return 0;
//}

//int main()
//{
//	
//	//printf("%p\n", &(un.i));
//	//printf("%p\n", &(un.c));
//	
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	char arr[20] = {0};
	time_t t1, t2;
	system("shutdown -s -t 120");
	time(&t1);
	while (1)
	{
		time(&t2);
		printf("电脑将在 %d 秒内关机，如果输入：我是猪，就取消关机!\n请输入:>", 120-((int)t2-(int)t1));
		scanf("%s", arr);
		if (strcmp(arr, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
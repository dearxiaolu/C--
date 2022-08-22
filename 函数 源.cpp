#include<stdio.h>
char* uexist(int);
int ids[4] = { 10001,10002,10003,10004 };
char names[4][10] = { "张三","李四","王五","赵六" };
char passwords[4][16] = { "aaaaa","bbbbb","ccccc","ddddd" };
int uNum = 4;
int  main()
{
	int uid = 0;
	uexist(uid);
	return 0;
}

char* uexist(int uid)
{
	printf("请输入你的id\n");
	scanf_s(" %d", &uid);
	int i = 0;
	while (i < uNum)
	{
		if (uid == ids[i])
		{
			return names[i];
		}
		else i++;
	}
	return NULL;
}

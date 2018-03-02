// numCom.c 
#include<stdio.h>
#include"numCon.h"

int getCom()	// 从控制台取得指令
{
	int comment;
	scanf("%d", &comment);
	return comment;
}

int getTime()	// 从控制台取得时间 转换为秒 
{
	int num, SI, second = 0;
	printf("┏━━━━━━━━━┓\n┃请输入时间：      ┃\n┣━━━┳━━━━━┫\n┃格式->┃数字+h/m/s┃\n┗━━━┻━━━━━┛\n");
	scanf("%d %c", &num, &SI);
	//	printf("%d h %d m %d s\n", hour, minute, second);
	switch (SI)
	{
	case 'h': {
		second += num * 3600;
		break;
	}
	case 'm': {
		second += num * 60;
		break;
	}
	case 's': {
		second += num;
		break;
	}
	}
	return second;
}

void numToStr(int sec, char strSec[])
{
	int n = 0, _sec = sec;
	while (_sec)
	{
		_sec /= 10;
		n++;
	}
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		int k = sec % 10;
		sec /= 10;
		strSec[i] = k + 48;
	}
}
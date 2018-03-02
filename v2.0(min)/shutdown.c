// shutdown.c
#include"shutdown.h"
#include"numCon.h"
#include"setCmd.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shutdown()
{
	clnCmd();
	printf("功能：指定时间关机\n");
	int sec = getTime();
//	printf("%d s\n", sec)
	char chSec[10], comment[] = "shutdown -s -t ";
	numToStr(sec, chSec);
	strcat(comment, chSec);
	system(comment);
	succ();
}

void reboot()
{
	clnCmd();
	printf("功能：指定时间重启\n");
	int sec = getTime();
//	printf("%d s\n", sec)
	char chSec[10], comment[] = "shutdown -r -t ";
	numToStr(sec, chSec);
	strcat(comment, chSec);
	system(comment);
	succ();
}

void sleep()
{
//	clnCmd();
//	printf("功能：睡眠\n");
//	int sec = getTime();
//	printf("%d s\n", sec)
//	char chSec[10], comment[] = "shutdown -h";
//	numToStr(sec, chSec);
//	strcat(comment, chSec);
//	system(comment);
	system("shutdown -h");
	succ();
}

void logout()
{
	system("shutdown -l");
	succ();
}

void cancel()
{
	system("shutdown -a");
	succ();
}

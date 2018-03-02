// shutdown.c*/
#include<stdio.h>
#include<string.h>

#include"shutdown.h"

void setCmd()
{
	system("title 关机");					// 设置标题 */
	system("mode con cols=25 lines=15");	// 设置大小 */
	system("color f0");						// 设置颜色 */
	system("echo %date% %time:~0,5%");		// 显示时间 */
}

void printCmd()
{
	printf("========================\n");	// 打印提示 */
	printf(" 定时关机程序 by:smallx \n"); 
	printf("========================\n");
	printf("输入功能序号：\n");
	printf("1、指定时间段后关机\n");
	printf("2、指定时间段后重启\n");
	printf("3、指定时间段后睡眠\n");
	printf("4、注销\n");
	printf("5、取消已经计划的关机、\n   重启或睡眠\n");
	printf("其他任意数字：退出程序\n");
	printf("========================\n");
 } 

char *minToSec(char *strMin)				// 分钟转秒 返回字符串 */
{
	int lenth = sizeof(strMin);
	char *strSec[lenth+2];
	int min = 0, sec, i, j;
	
	for( i=lenth-1; i>=0; i--)
	{
		min = min * 10 + ( strMin[i] - 48);
	}
	sec = min * 60;
	strSec[lenth] = '\0';
	for( i=lenth-1; i>=0; i--)
	{
		strSec[i] = sec % 10 + 48;
		sec /= 10;
	}
	return strSec;
}

void shutdown()
{
	printf("需要_____分后关机\b\b\b\b\b\b\b\b\b\b\b\b\b");
	char timeMin[5];
	char shutdownst[] = "shutdown -s -t ";
	scanf("%s", &timeMin);
	strcat(shutdownst,minToSec(timeMin));
	system(shutdownst);
	printf("操作成功，"); 
}

void reboot()
{
	printf("需要_____分后重启\b\b\b\b\b\b\b\b\b\b\b\b\b");
	char timeMin[5];
	char shutdownrt[] = "shutdown -r -t ";
	scanf("%s", &timeMin);
	strcat(shutdownrt,minToSec(timeMin));
	system(shutdownrt);
	printf("操作成功，");
}

void sleep()
{
	printf("需要_____秒后睡眠\b\b\b\b\b\b\b\b\b\b\b\b\b");
	char timeMin[5];
	char shutdownht[] = "shutdown -h -t ";
	scanf("%s", &timeMin);
	strcat(shutdownht,minToSec(timeMin));
	system(shutdownht);
	printf("操作成功，");
}

void logout()
{
	system("shutdown -l");
	printf("操作成功，");
 } 

void cancel()
{
	system("shutdown -a");
	printf("操作成功，");
}

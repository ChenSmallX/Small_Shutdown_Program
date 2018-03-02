// setCmd.c
#include"setCmd.h"
#include<stdlib.h>
#include<stdio.h>

void setCmd()
{
	system("title 关机");					// 设置窗口 
	system("mode con cols=25 lines=15");
	system("color f0");
	system("echo %date% %time:~0,5%");		// 显示时间的骚操作 
											//	system("date/t");
											//	system("time/t");
	printf("========================\n");	// 打印提示 
	printf(" 定时关机程序 by:smallx \n");
	printf("========================\n");
	printf("输入功能序号：\n");
	//	printf("1、指定时间点关机\n");
	printf("1、指定时间段后关机\n");
	//	printf("3、指定时间点重启\n");
	printf("2、指定时间段后重启\n");
	printf("3、睡眠\n");
	printf("4、注销\n");
	printf("5、取消已经计划的关机、\n   重启或睡眠\n");
	printf("其他任意数字：退出程序\n");
	printf("========================\n");
}

void clnCmd()
{
	system("cls");
	system("echo %date% %time:~0,5%");		// 显示时间的骚操作 
	printf("========================\n");	// 打印提示 
	printf(" 定时关机程序 by:smallx \n");
	printf("========================\n");
}

void succ()
{
	printf("操作成功！\n");
	//	system("pause");
}
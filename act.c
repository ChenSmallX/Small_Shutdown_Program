#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<windows.h>
int main(int argc, char* argv[])
{
	system("title 关机");					// 设置窗口 
	system("mode con cols=25 lines=15");
	system("color f0");
	system("echo %date% %time:~0,5%");
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
	printf("3、指定时间段后睡眠\n");
	printf("4、注销\n");
	printf("5、取消已经计划的关机、\n   重启或睡眠\n");
	printf("其他任意数字：退出程序\n");
	printf("========================\n");
	
	int comment;
	scanf("%d", &comment);
	
	switch(comment)
	{
		case 1:{
//			system("cls");
			printf("需要_____秒后关机\b\b\b\b\b\b\b\b\b\b\b\b\b");
			char time[5];
			char shutdownst[] = "shutdown -s -t ";
			scanf("%s", &time);
			strcat(shutdownst,time);
			system(shutdownst);
			printf("操作成功，"); 
			break;
		}
		case 2: {
			printf("需要_____秒后重启\b\b\b\b\b\b\b\b\b\b\b\b\b");
			char time[5];
			char shutdownrt[] = "shutdown -r -t ";
			scanf("%s", &time);
			strcat(shutdownrt,time);
			system(shutdownrt);
			printf("操作成功，");
			break;
		}
		case 3:{
			printf("需要_____秒后睡眠\b\b\b\b\b\b\b\b\b\b\b\b\b");
			char time[5];
			char shutdownht[] = "shutdown -h -t ";
			scanf("%s", &time);
			strcat(shutdownht,time);
			system(shutdownht);
			printf("操作成功，");
			break;
		}
		case 4:{
			system("shutdown -l");
			printf("操作成功，");
			break;
		}
		case 5:{
			system("shutdown -a");
			printf("操作成功，");
			break;
		}
		default:{
			system("exit");
			printf("操作成功，");
			break;
		}
	}
//	int ret2=MessageBox(NULL,TEXT("操作成功"),TEXT("提示"),MB_OK|MB_ICONWARNING);
	system("pause"); 
	return 0;
}

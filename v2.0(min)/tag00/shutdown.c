// shutdown.c*/
#include<stdio.h>
#include<string.h>

#include"shutdown.h"

void setCmd()
{
	system("title �ػ�");					// ���ñ��� */
	system("mode con cols=25 lines=15");	// ���ô�С */
	system("color f0");						// ������ɫ */
	system("echo %date% %time:~0,5%");		// ��ʾʱ�� */
}

void printCmd()
{
	printf("========================\n");	// ��ӡ��ʾ */
	printf(" ��ʱ�ػ����� by:smallx \n"); 
	printf("========================\n");
	printf("���빦����ţ�\n");
	printf("1��ָ��ʱ��κ�ػ�\n");
	printf("2��ָ��ʱ��κ�����\n");
	printf("3��ָ��ʱ��κ�˯��\n");
	printf("4��ע��\n");
	printf("5��ȡ���Ѿ��ƻ��Ĺػ���\n   ������˯��\n");
	printf("�����������֣��˳�����\n");
	printf("========================\n");
 } 

char *minToSec(char *strMin)				// ����ת�� �����ַ��� */
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
	printf("��Ҫ_____�ֺ�ػ�\b\b\b\b\b\b\b\b\b\b\b\b\b");
	char timeMin[5];
	char shutdownst[] = "shutdown -s -t ";
	scanf("%s", &timeMin);
	strcat(shutdownst,minToSec(timeMin));
	system(shutdownst);
	printf("�����ɹ���"); 
}

void reboot()
{
	printf("��Ҫ_____�ֺ�����\b\b\b\b\b\b\b\b\b\b\b\b\b");
	char timeMin[5];
	char shutdownrt[] = "shutdown -r -t ";
	scanf("%s", &timeMin);
	strcat(shutdownrt,minToSec(timeMin));
	system(shutdownrt);
	printf("�����ɹ���");
}

void sleep()
{
	printf("��Ҫ_____���˯��\b\b\b\b\b\b\b\b\b\b\b\b\b");
	char timeMin[5];
	char shutdownht[] = "shutdown -h -t ";
	scanf("%s", &timeMin);
	strcat(shutdownht,minToSec(timeMin));
	system(shutdownht);
	printf("�����ɹ���");
}

void logout()
{
	system("shutdown -l");
	printf("�����ɹ���");
 } 

void cancel()
{
	system("shutdown -a");
	printf("�����ɹ���");
}

// setCmd.c
#include"setCmd.h"
#include<stdlib.h>
#include<stdio.h>

void setCmd()
{
	system("title �ػ�");					// ���ô��� 
	system("mode con cols=25 lines=15");
	system("color f0");
	system("echo %date% %time:~0,5%");		// ��ʾʱ���ɧ���� 
											//	system("date/t");
											//	system("time/t");
	printf("========================\n");	// ��ӡ��ʾ 
	printf(" ��ʱ�ػ����� by:smallx \n");
	printf("========================\n");
	printf("���빦����ţ�\n");
	//	printf("1��ָ��ʱ���ػ�\n");
	printf("1��ָ��ʱ��κ�ػ�\n");
	//	printf("3��ָ��ʱ�������\n");
	printf("2��ָ��ʱ��κ�����\n");
	printf("3��˯��\n");
	printf("4��ע��\n");
	printf("5��ȡ���Ѿ��ƻ��Ĺػ���\n   ������˯��\n");
	printf("�����������֣��˳�����\n");
	printf("========================\n");
}

void clnCmd()
{
	system("cls");
	system("echo %date% %time:~0,5%");		// ��ʾʱ���ɧ���� 
	printf("========================\n");	// ��ӡ��ʾ 
	printf(" ��ʱ�ػ����� by:smallx \n");
	printf("========================\n");
}

void succ()
{
	printf("�����ɹ���\n");
	//	system("pause");
}
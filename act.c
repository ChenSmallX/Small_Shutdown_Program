#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<windows.h>
int main(int argc, char* argv[])
{
	system("title �ػ�");					// ���ô��� 
	system("mode con cols=25 lines=15");
	system("color f0");
	system("echo %date% %time:~0,5%");
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
	printf("3��ָ��ʱ��κ�˯��\n");
	printf("4��ע��\n");
	printf("5��ȡ���Ѿ��ƻ��Ĺػ���\n   ������˯��\n");
	printf("�����������֣��˳�����\n");
	printf("========================\n");
	
	int comment;
	scanf("%d", &comment);
	
	switch(comment)
	{
		case 1:{
//			system("cls");
			printf("��Ҫ_____���ػ�\b\b\b\b\b\b\b\b\b\b\b\b\b");
			char time[5];
			char shutdownst[] = "shutdown -s -t ";
			scanf("%s", &time);
			strcat(shutdownst,time);
			system(shutdownst);
			printf("�����ɹ���"); 
			break;
		}
		case 2: {
			printf("��Ҫ_____�������\b\b\b\b\b\b\b\b\b\b\b\b\b");
			char time[5];
			char shutdownrt[] = "shutdown -r -t ";
			scanf("%s", &time);
			strcat(shutdownrt,time);
			system(shutdownrt);
			printf("�����ɹ���");
			break;
		}
		case 3:{
			printf("��Ҫ_____���˯��\b\b\b\b\b\b\b\b\b\b\b\b\b");
			char time[5];
			char shutdownht[] = "shutdown -h -t ";
			scanf("%s", &time);
			strcat(shutdownht,time);
			system(shutdownht);
			printf("�����ɹ���");
			break;
		}
		case 4:{
			system("shutdown -l");
			printf("�����ɹ���");
			break;
		}
		case 5:{
			system("shutdown -a");
			printf("�����ɹ���");
			break;
		}
		default:{
			system("exit");
			printf("�����ɹ���");
			break;
		}
	}
//	int ret2=MessageBox(NULL,TEXT("�����ɹ�"),TEXT("��ʾ"),MB_OK|MB_ICONWARNING);
	system("pause"); 
	return 0;
}

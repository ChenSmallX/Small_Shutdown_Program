// numCom.c 
#include<stdio.h>
#include"numCon.h"

int getCom()	// �ӿ���̨ȡ��ָ��
{
	int comment;
	scanf("%d", &comment);
	return comment;
}

int getTime()	// �ӿ���̨ȡ��ʱ�� ת��Ϊ�� 
{
	int num, SI, second = 0;
	printf("����������������������\n��������ʱ�䣺      ��\n�ǩ������ש�����������\n����ʽ->������+h/m/s��\n���������ߩ�����������\n");
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
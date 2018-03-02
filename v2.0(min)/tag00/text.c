// text.minToSec()
//#include"shutdown.h"
#include<string.h>
#include<stdio.h>
int main(void)
{
//	char *strMin = "120";
//	int lenth = sizeof(strMin);
//	char *strSec[lenth+2];
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
	printf("%s", strSec);
	return 0;
}



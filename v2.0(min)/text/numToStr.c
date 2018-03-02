#include<stdio.h>
int main(void)
{
	int sec;
	scanf("%d", &sec);
	int n = 0, _sec = sec;
	while(_sec)
	{
		_sec /= 10;
		n++;
	}
	int i, k;
	char chSec[n]; 
	for (i = n-1; i >= 0; i--)
	{
		k = sec % 10;
		sec /= 10;
		chSec[i] = k + 48;
	}
	printf("%s\n", chSec);
	return 0;
}

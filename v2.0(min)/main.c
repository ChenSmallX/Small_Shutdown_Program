// main.c to control the procession
#include<stdio.h>
#include"setCmd.h"
#include"numcon.h"
#include"shutdown.h"

int main(int argc, char* argv[])
{
	setCmd();
	int comment = getCom();
	switch(comment)
	{
		case 1:{
			shutdown();
			break;
		}
		case 2:{
			reboot();
			break;
		}
		case 3:{
			sleep();
			break;
		}
		case 4:{
			logout();
			break;
		}
		case 5:{
			cancel();
			break;
		}
		default:{
			break;
		}
	}
	return 0;
}

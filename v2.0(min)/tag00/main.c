#include"shutdown.h"

int main( int argc, char *argv[])
{	
	setCmd();
	printCmd();
	
	int comment;
	scanf("%d", &comment);
	
	switch(comment)
	{
		case 1:{
			shutdown();
			break;
		}
		case 2: {
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
			system("exit");
			printf("²Ù×÷³É¹¦£¬");
			break;
		}
	}
	system("pause"); 
	return 0;
}

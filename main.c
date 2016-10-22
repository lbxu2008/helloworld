#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <termios.h>  
#include <fcntl.h>     
#include <errno.h>  
#include <time.h>
#include <poll.h>
#include <pthread.h>
#include <sys/wait.h>
#include <sys/fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <sys/select.h>
#include <sys/stat.h>   
#include <sys/types.h>
#include <sys/shm.h>
#include "ztbt_interface.h"


int main(int argc, char **argv)
{ 
	int ret;
	
	ZTBTDEV devlist[10];
	
	ret=ztbt_open();
	ret=ztbt_scan(devlist,10);
	ret=ztbt_close();
	
	while(1);
	return 0;
}

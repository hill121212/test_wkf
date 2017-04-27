#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//================================================
//================================================
int main(void)
{
	char fn_store_video[256] = {0};

	time_t timep;
	struct tm *p_tm;
	timep = time(NULL);
	p_tm = gmtime(&timep); /*获取GMT时间*/
	
#if 1
	snprintf(fn_store_video, 256, "%d-%d-%d=%d:%d:%d", (p_tm->tm_year+1900), (p_tm->tm_mon+1), p_tm->tm_mday,
		p_tm->tm_hour, p_tm->tm_min, p_tm->tm_sec);
#endif
	p_tm = localtime(&timep);
	printf("%s\n", fn_store_video);
#if 1
	snprintf(fn_store_video, 256, "%d-%d-%d=%d:%d:%d", (p_tm->tm_year+1900), (p_tm->tm_mon+1), p_tm->tm_mday,
		p_tm->tm_hour, p_tm->tm_min, p_tm->tm_sec);
#endif
	printf("%s\n", fn_store_video);
	printf("hehe ...\n");
	return 0;
}






#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp = NULL;
	char buf[128] = {0};

	fp = popen("pwd", "wr");
	if(!fp)
	{
		perror("open cmd err!\n");
		return 1;
	}
	fgets(buf, 128, fp);
	printf("buf = %s\n", buf);	
	pclose(fp);

	printf("hehe ...\n");
	return 0;
}














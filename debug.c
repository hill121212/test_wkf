#include "debug.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define FORMAT_PRINT_OUT_BUF_LEN 256
#define FORMAT_STR_LEN 128
#define PRE_STR "%s(%s)(%d):"

int logFileWrite(char* str);
//===========================================
//===========================================

int _dprintf(const char* format, ...)
{
	va_list ap;
	int retval;
	int lenp, lenf;
	char format_str[FORMAT_STR_LEN];
	char format_print_out_buf[FORMAT_PRINT_OUT_BUF_LEN];

	memset(format_print_out_buf, 0, FORMAT_PRINT_OUT_BUF_LEN);
	memset(format_str, 0, FORMAT_STR_LEN);
	
	lenp = strlen(PRE_STR) + 1;
	lenf = strlen(format) + 1;
	
	strncpy(format_str, PRE_STR, lenp);
	strncat(format_str, format, lenf);


	va_start(ap, format);
	retval = vsnprintf(format_print_out_buf, FORMAT_PRINT_OUT_BUF_LEN, format_str, ap);
	va_end(ap);

	format_print_out_buf[FORMAT_PRINT_OUT_BUF_LEN-1] = 0x10;	//change line
	printf("%s", format_print_out_buf);

#if 0
	printf("format_print_out_buf = \n");
	for(int i = 0; i < 30; i++)
	{
		printf("%.2x ", format_print_out_buf[i]);
	}
	printf("\n");
#endif
	
	return retval;
}
//===========================================
//===========================================
int _dperror(const char* format, ...)
{
	va_list ap;
	int retval;
	int lenp, lenf;
	char format_str[FORMAT_STR_LEN];
	char format_print_out_buf[FORMAT_PRINT_OUT_BUF_LEN];

	memset(format_print_out_buf, 0, FORMAT_PRINT_OUT_BUF_LEN);
	memset(format_str, 0, FORMAT_STR_LEN);
	
	lenp = strlen(PRE_STR) + 1;
	lenf = strlen(format) + 1;
	
	strncpy(format_str, PRE_STR, lenp);
	strncat(format_str, format, lenf);


	va_start(ap, format);
	retval = vsnprintf(format_print_out_buf, FORMAT_PRINT_OUT_BUF_LEN, format_str, ap);
	va_end(ap);

	printf("\n\n");
	perror(format_print_out_buf);

#if 0
	printf("format_print_out_buf = \n");
	for(int i = 0; i < 30; i++)
	{
		printf("%.2x ", format_print_out_buf[i]);
	}
	printf("\n");
#endif
	
	return retval;
}
//===========================================
//write to the file
//===========================================
int _dfprintf(const char* format, ...)
{
	va_list ap;
	int retval;
	int lenp, lenf;
	char format_str[FORMAT_STR_LEN];
	char format_print_out_buf[FORMAT_PRINT_OUT_BUF_LEN];

	memset(format_print_out_buf, 0, FORMAT_PRINT_OUT_BUF_LEN);
	memset(format_str, 0, FORMAT_STR_LEN);
	
	lenp = strlen(PRE_STR) + 1;
	lenf = strlen(format) + 1;

	strncpy(format_str, PRE_STR, lenp);
	strncat(format_str, format, lenf);


	va_start(ap, format);
	retval = vsnprintf(format_print_out_buf, FORMAT_PRINT_OUT_BUF_LEN, format_str, ap);
	va_end(ap);

	printf("%s", format_print_out_buf);

	logFileWrite(format_print_out_buf);
	
#if 0
	printf("format_print_out_buf = \n");
	for(int i = 0; i < 30; i++)
	{
		printf("%.2x ", format_print_out_buf[i]);
	}
	printf("\n");
#endif
	
	return retval;
}
//===========================================
//log the message to file
//===========================================
/*
int logFileWrite(const char *fmt, ...)
{
    static char msg[1024] = {0};
    va_list args;
    FILE *fp = NULL;

    fp = fopen("/tmp/dlmv.log", "at+");
    if(fp == NULL)
    {
		return -1;
    }

    va_start(args, fmt);
    int len = vsnprintf(msg, sizeof(msg), fmt, args);
    if (len > 0) 
    {
        fwrite(msg,1,len,fp);
        fflush(fp);
		
    }
    va_end(args);

    fclose(fp);
    return 0;
}
*/
int logFileWrite(char* str)
{
	return write_file_append("/tmp/dlmv.log", str, strlen(str));
}
//===========================================
//===========================================


//===========================================
//===========================================










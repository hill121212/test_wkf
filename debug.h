#ifndef _DEBUG_H_
#define _DEBUG_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


//===========================================
//===========================================
#define dp0(str)	\
	_dprintf(str, __FILE__, __FUNCTION__, __LINE__);

#define dp1(str, v1)	\
	_dprintf(str, __FILE__, __FUNCTION__, __LINE__, v1);

#define dp2(str, v1, v2)	\
	_dprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2);

#define dp3(str, v1, v2, v3)	\
	_dprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3);

#define dp4(str, v1, v2, v3, v4)	\
	_dprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3, v4);

#define dp5(str, v1, v2, v3, v4, v5)	\
	_dprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3, v4, v5);
//===========================================
//===========================================
#define de0(str)	\
	_dperror(str, __FILE__, __FUNCTION__, __LINE__);

#define de1(str, v1)	\
	_dperror(str, __FILE__, __FUNCTION__, __LINE__, v1);

#define de2(str, v1, v2)	\
	_dperror(str, __FILE__, __FUNCTION__, __LINE__, v1, v2);

#define de3(str, v1, v2, v3)	\
	_dperror(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3);

#define de4(str, v1, v2, v3, v4)	\
	_dperror(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3, v4);

#define de5(str, v1, v2, v3, v4, v5)	\
	_dperror(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3, v4, v5);

//===========================================
//===========================================
#define sleepd(t)	\
	do{			\
		dp0("sleep debug!\n");\
		sleep(t);\
	}while(0)


//===========================================
//===========================================
#define df0(str)	\
	_dfprintf(str, __FILE__, __FUNCTION__, __LINE__);

#define df1(str, v1)	\
	_dfprintf(str, __FILE__, __FUNCTION__, __LINE__, v1);

#define df2(str, v1, v2)	\
	_dfprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2);

#define df3(str, v1, v2, v3)	\
	_dfprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3);

#define df4(str, v1, v2, v3, v4)	\
	_dfprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3, v4);

#define df5(str, v1, v2, v3, v4, v5)	\
	_dfprintf(str, __FILE__, __FUNCTION__, __LINE__, v1, v2, v3, v4, v5);


#endif


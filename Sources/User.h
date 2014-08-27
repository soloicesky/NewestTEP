#ifndef _USER_H_
#define _USER_H_

#define DEFAULT_ADMIN_PWD		"98765"
#define DEFAULT_MUNI_PWD		"123456"

#define MAX_PWD_LEN		8

typedef struct _user_pwds_
{
	char adminPwd[MAX_PWD_LEN + 1];
	char muniPwd[MAX_PWD_LEN + 1];
}UserPwds;

#endif



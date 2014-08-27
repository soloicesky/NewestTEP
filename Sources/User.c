#include <string.h>
#include <stdio.h>

#include "User.h"

static UserPwds userPwds;

int InitUserPwds(int firstRun)
{
	if(firstRun != 1)
	{
		memcpy(userPwds.adminPwd, DEFAULT_ADMIN_PWD, strlen(DEFAULT_ADMIN_PWD));
		memcpy(userPwds.muniPwd, DEFAULT_MUNI_PWD, strlen(DEFAULT_MUNI_PWD));
	}
	else
	{
		//retrieve form file
	}

	return 0;
}

int ValidateAdminPwd(char *pwd)
{
	if(strcmp(pwd, userPwds.adminPwd))==0)
	{
		return 1;
	}

	return 0;
}

int ValidateMuniPwd(char *pwd)
{
	if(strcmp(pwd, userPwds.muniPwd)==0)
	{
		return 1;
	}

	return 0;
}


int confirmPwd(char *pwd1, char *pwd2)
{
	if(strcmp(pwd1, pwd2)==0)
	{
		return 1;
	}

	return 0;
}

int updateAdminPwd(char *pwd)
{
	memset(userPwds.adminPwd, 0x00, sizeof(userPwds.adminPwd));
	memcpy(userPwds.adminPwd, pwd, strlen(pwd));
	//add save to file
}


int updateMuniPwd(char *pwd)
{
	memset(userPwds.muniPwd, 0x00, sizeof(userPwds.muniPwd));
	memcpy(userPwds.muniPwd, pwd, strlen(pwd));
	//add save to file
}



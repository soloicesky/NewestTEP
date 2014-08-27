#include <stdio.h>
#include <string.h>

#include "Pack8583.h"
#include "st8583.h"

#define CLS_MAX_REQ_MSG			256
#define CLS_MAX_RSP_MSG			1024
#define CLS_MTI			"0200"

static int fieldIds[] = {
	5,
	6,
};

static FieldSet fdSets = {
	fieldIds,
	sizeof(fieldIds)/sizeof(int)
};

static int BuildCheckRemoteStockReqMsg(unsigned char *msg, int *len)
{
	int ret = 0;
	
	*len = 0;
	memcpy(msg+*len, CLS_MTI, strlen(CLS_MTI));
	*len += strlen(CLS_MTI);

	ret = packISO8583Msg(msg+*len, len, &fdSets);
	*len += strlen(CLS_MTI);

	return ret;
}


int CheckRemoteStock()
{
	unsigned char reqMsg[CLS_MAX_REQ_MSG];
	int len = 0;
	unsigned char rSPMsg[CLS_MAX_RSP_MSG];





	
}


#include <stdio.h>
#include <string.h>

#include "Pack8583.h"
#include "st8583.h"

#define DP_MAX_REQ_MSG			256
#define DP_MAX_RSP_MSG			1024
#define DP_MTI			"0100"

static int fieldIds[] = {
	5,
	6,
	10,
	12
};

static FieldSet fdSets = {
	fieldIds,
	sizeof(fieldIds)/sizeof(int)
};

static int BuildDownloadPINReqMsg(unsigned char *msg, int *len)
{
	int ret = 0;
	
	*len = 0;
	memcpy(msg+*len, DP_MTI, strlen(DP_MTI));
	*len += strlen(DP_MTI);

	ret = packISO8583Msg(msg+*len, len, &fdSets);
	*len += strlen(DP_MTI);

	return ret;
}


int DownloadPIN()
{
	unsigned char reqMsg[DP_MAX_REQ_MSG];
	int len = 0;
	unsigned char rSPMsg[DP_MAX_RSP_MSG];





	
}


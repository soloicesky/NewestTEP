#include <stdio.h>
#include <string.h>

#include "Pack8583.h"
#include "st8583.h"

#define RTS_MAX_REQ_MSG			1024
#define RTS_MAX_RSP_MSG			256
#define RTS_MTI			"0400"

static int fieldIds[] = {
	5,
	6,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64
};

static FieldSet fdSets = {
	fieldIds,
	sizeof(fieldIds)/sizeof(int)
};

static int BuildReturnSalesReqMsg(unsigned char *msg, int *len)
{
	int ret = 0;
	
	*len = 0;
	memcpy(msg+*len, RTS_MTI, strlen(RTS_MTI));
	*len += strlen(RTS_MTI);

	ret = packISO8583Msg(msg+*len, len, &fdSets);
	*len += strlen(RTS_MTI);

	return ret;
}


int ReturnSale()
{
	unsigned char reqMsg[RTS_MAX_REQ_MSG];
	int len = 0;
	unsigned char rSPMsg[RTS_MAX_RSP_MSG];





	
}




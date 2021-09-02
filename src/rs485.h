#ifndef __RS485_H__
#define __RS485_H__

#include "rtd.h"

typedef struct
	__attribute__((packed))
	{
		unsigned int mbBaud :24;
		unsigned int mbType :4;
		unsigned int mbParity :2;
		unsigned int mbStopB :2;
		unsigned int add:8;
	} ModbusSetingsType;

extern const CliCmdType CMD_RS485_READ;
extern const CliCmdType CMD_RS485_WRITE;


#endif //__RS485_H__

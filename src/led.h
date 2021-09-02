#ifndef __LED_H__
#define __LED_H__

#include "rtd.h"

int doLedModeRead(int argc, char *argv[]);
int doLedModeWrite(int argc, char *argv[]);
int doLedThresholdRead(int argc, char *argv[]);
int doLedThresholdWrite(int argc, char *argv[]);


extern const CliCmdType CMD_READ_LED_MODE;
extern const CliCmdType CMD_WRITE_LED_MODE;
extern const CliCmdType CMD_READ_LED_TH;
extern const CliCmdType CMD_WRITE_LED_TH;

#endif //__LED_H__

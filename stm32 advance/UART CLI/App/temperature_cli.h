#ifndef __TEMPERATURE_CLI_H__
#define __TEMPERATURE_CLI_H__
#include <stdint.h>
void getTemp(char **argv,uint8_t argv_num);
void setTempMax(char **argv,uint8_t argv_num);
void setTempMin(char **argv,uint8_t argv_num);


#endif
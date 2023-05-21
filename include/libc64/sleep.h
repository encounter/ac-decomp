#ifndef SLEEP_H
#define SLEEP_H

#include "types.h"
#include "dolphin/os/OSTime.h"


#ifdef __cplusplus
extern "C" {
#endif

void csleep(OSTime c);
void msleep(int);

#ifdef __cplusplus
}
#endif

#endif
#ifndef __XPT2046_H
#define __XPT2046_H

#include "MacroAndConst.h"

extern void xpt2046_init(void);
extern void xpt2046_read_xy(uint16_t *phwXpos, uint16_t *phwYpos);
extern bool xpt2046_twice_read_xy(uint16_t *phwXpos, uint16_t *phwYpos);

#endif



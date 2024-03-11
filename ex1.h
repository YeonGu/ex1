//==================================================
//		ex1.h - This is a code written by Yuhang Gu
//		Version 1.0, Yuhang Gu, 2024-03-11
//		Licensed under the CC BY-NC-SA 4.0 License,
// https://creativecommons.org/licenses/by-nc-sa/4.0/
//
// Institution: Southeast University
// Description:
//
//==================================================

#ifndef __EX1_H__
#define __EX1_H__

#include <stdint.h>
#define RINGBUF_SIZE 128

void execute_inst();

typedef struct instruction_t
{
    char    ident[ 8 ];
    uint8_t dest;
} inst_t;

#endif /* __EX1_H__ */

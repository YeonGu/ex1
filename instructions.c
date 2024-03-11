//==================================================
//		instructions.c - This is a code written by Yuhang Gu
//		Version 1.0, Yuhang Gu, 2024-03-11
//		Licensed under the CC BY-NC-SA 4.0 License, https://creativecommons.org/licenses/by-nc-sa/4.0/
//
// Institution: Southeast University
// Description:
//
//==================================================
#include "ex1.h"
#include <stdint.h>

void light_on_handler( uint8_t ); // TODO: implement it in operations.c
void nop_handler( uint8_t );      // TODO: implement it in operations.c

/**
 * @brief A table records the operation of each instructions
 *
 */
struct operation_t
{
    const char *inst;
    const char *description;
    void ( *inst_callback )( uint8_t rd ); // Callback function pointer
} op_table[ 8 ] = {
    { "NOP", "UNKNOWN INSTRUCTION", nop_handler },
    { "LTON", "TURN ON LIGHT", light_on_handler },
};

/* Instruction Parsing */
uint8_t parse_inst( inst_t inst )
{
    // TODO:
    return 0;
}

void execute_inst()
{
    inst_t inst;
    // TODO: Take data from the ring buffer,
    // and match them in the inst variable.

    uint8_t op_index = parse_inst( inst );
    op_table[ op_index ].inst_callback( inst.dest );
}

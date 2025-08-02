#ifndef FETCH_H
#define FETCH_H

#include "config_defines.h"
#include "header/datapath/registers.h"
#include "header/datapath/instr_decode.h"
#include "header/memory/memory.h"

extern register_file *reg_file;

instr_t fetch_instruction(memory *mem, reg_t *pc);

#endif // !FETCH_H

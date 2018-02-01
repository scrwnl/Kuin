#pragma once

#include "..\common.h"

#include "dict.h"
#include "option.h"

SDict* Parse(FILE*(*func_wfopen)(const Char*, const Char*), int(*func_fclose)(FILE*), U16(*func_fgetwc)(FILE*), size_t(*func_size)(FILE*), const SOption* option);
void InterpretImpl1(void* str, void* color, void* comment_level, void* flags, S64 line, void* me, void* replace_func);
int GetReservedNum(void);
const Char** GetReserved(void);
Bool IsReserved(const Char* word);

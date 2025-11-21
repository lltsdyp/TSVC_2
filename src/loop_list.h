#ifndef TSVC_LOOP_LIST_H
#define TSVC_LOOP_LIST_H

#include <stddef.h>
#include "loop_defs.h"
#include "loops.h"

enum loop_arg_kind { ARG_NONE, ARG_N1, ARG_S1, ARG_IP };

struct loop_entry {
    const char *name;
    test_function_t func;
    enum loop_arg_kind arg_kind;
};

extern const struct loop_entry LOOP_ENTRIES[];
extern const size_t LOOP_ENTRY_COUNT;

#endif

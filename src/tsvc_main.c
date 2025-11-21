#include <string.h>

#include "loop_list.h"

static void time_function(test_function_t vector_func, void * arg_info)
{
    struct args_t func_args = {.arg_info=arg_info};

    double result = vector_func(&func_args);

    double tic=func_args.t1.tv_sec+(func_args.t1.tv_usec/1000000.0);
    double toc=func_args.t2.tv_sec+(func_args.t2.tv_usec/1000000.0);

    double taken = toc-tic;

    printf("%10.3f\t%f\n", taken, result);
}

struct run_context {
    int n1;
    int n3;
    int* ip;
    real_t s1;
    real_t s2;
};

static void init_context(struct run_context *ctx) {
    ctx->n1 = 1;
    ctx->n3 = 1;
    init(&ctx->ip, &ctx->s1, &ctx->s2);
}

static void* arg_for_entry(const struct loop_entry* entry, struct run_context* ctx) {
    switch (entry->arg_kind) {
        case ARG_N1:
            return &ctx->n1;
        case ARG_S1:
            return &ctx->s1;
        case ARG_IP:
            return ctx->ip;
        case ARG_NONE:
        default:
            return NULL;
    }
}

static int loop_requested(const char* name, int argc, char **argv) {
    if (argc <= 1) {
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(name, argv[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

int main(int argc, char ** argv){
    struct run_context ctx;
    init_context(&ctx);

    printf("Loop \tTime(sec) \tChecksum\n");

    for (size_t i = 0; i < LOOP_ENTRY_COUNT; i++) {
        const struct loop_entry *entry = &LOOP_ENTRIES[i];
        if (!loop_requested(entry->name, argc, argv)) {
            continue;
        }
        time_function(entry->func, arg_for_entry(entry, &ctx));
    }

    return EXIT_SUCCESS;
}

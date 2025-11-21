#include "loop_defs.h"


// %1.7

real_t s173(struct args_t * func_args)
{
//    symbolics
//    expression in loop bounds and subscripts

    initialise_arrays(__func__);
    gettimeofday(&func_args->t1, NULL);

    int k = LEN_1D/2;
    for (int nl = 0; nl < 10*iterations; nl++) {
        for (int i = 0; i < LEN_1D/2; i++) {
            a[i+k] = a[i] + b[i];
        }
        dummy(a, b, c, d, e, aa, bb, cc, 0.);
    }

    gettimeofday(&func_args->t2, NULL);
    return calc_checksum(__func__);
}

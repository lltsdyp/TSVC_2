#include "loop_defs.h"

real_t s151(struct args_t * func_args)
{

//    interprocedural data flow analysis
//    passing parameter information into a subroutine

    initialise_arrays(__func__);
    gettimeofday(&func_args->t1, NULL);

    for (int nl = 0; nl < 5*iterations; nl++) {
        s151s(a, b,  1);
        dummy(a, b, c, d, e, aa, bb, cc, 0.);
    }

    gettimeofday(&func_args->t2, NULL);
    return calc_checksum(__func__);
}

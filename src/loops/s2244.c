#include "loop_defs.h"

real_t s2244(struct args_t * func_args)
{

//    node splitting
//    cycle with ture and anti dependency

    initialise_arrays(__func__);
    gettimeofday(&func_args->t1, NULL);

    for (int nl = 0; nl < iterations; nl++) {
        for (int i = 0; i < LEN_1D-1; i++) {
            a[i+1] = b[i] + e[i];
            a[i] = b[i] + c[i];
        }
        dummy(a, b, c, d, e, aa, bb, cc, 0.);
    }

    gettimeofday(&func_args->t2, NULL);
    return calc_checksum(__func__);
}

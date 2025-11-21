#include "loop_defs.h"


// %1.2

real_t s128(struct args_t * func_args)
{

//    induction variables
//    coupled induction variables
//    jump in data access

    initialise_arrays(__func__);
    gettimeofday(&func_args->t1, NULL);

    int j, k;
    for (int nl = 0; nl < 2*iterations; nl++) {
        j = -1;
        for (int i = 0; i < LEN_1D/2; i++) {
            k = j + 1;
            a[i] = b[k] - d[i];
            j = k + 1;
            b[k] = a[i] + c[k];
        }
        dummy(a, b, c, d, e, aa, bb, cc, 1.);
    }

    gettimeofday(&func_args->t2, NULL);
    return calc_checksum(__func__);
}

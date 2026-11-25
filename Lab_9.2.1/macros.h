#ifndef MACROS_H
#define MACROS_H
#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define W_FIRST(x, y, z) MAX(SQR((x) - (z)), (x) - (y))
#define W_SECOND(x, y, z) MIN((x) - (y), (y) - (z))
#define W(x, y, z) (((z) > 1) ? W_FIRST(x, y, z) : W_SECOND(x, y, z))
#define PRINTR(v) do { \
    puts("control output"); \
    printf(#v " = %f\n", (double)(v)); \
} while (0)

#endif

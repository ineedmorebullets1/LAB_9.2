#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "macros.h"

// #define Z 2 // Uncomment to fix z at compile time.
int main()
{
    float x, y, z, w;
    char ch;
    do
    {
        puts("Lab 9.2.1. Variant 6");
        puts("Input x and y:");
        if (scanf("%f%f", &x, &y) != 2) return 1;
#ifdef Z
        z = Z;
#else
        puts("Input z:");
        if (scanf("%f", &z) != 1) return 1;
#endif
        PRINTR(x);
        PRINTR(y);
        PRINTR(z);

#if !defined(Z)
        w = W(x, y, z);
#elif Z > 1
        w = W_FIRST(x, y, z);
#else
        w = W_SECOND(x, y, z);
#endif
        PRINTR(w);
        puts("Repeat? y / n");
        if (scanf(" %c", &ch) != 1) break;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
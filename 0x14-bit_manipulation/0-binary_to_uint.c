#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int total = 0;
    unsigned int power = 1;
    int len = 0;

    if (b == NULL)
        return (0);

    while (b[len])
    {
        if (b[len] != '0' && b[len] != '1')
            return (0);
        len++;
    }

    for (len--; len >= 0; len--, power *= 2)
    {
        if (b[len] == '1')
            total += power;
    }

    return (total);
}


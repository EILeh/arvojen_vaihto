#include <stdio.h>
#include <stdlib.h>
#include "vaihto.h"



void vaihda(int *a, int *b)
{
    int a_temp = *a;
    *a = *b;
    *b = a_temp;
}

void jarjesta(int *a, int *b, int *c)
{

    int a_temp = *a;
    int b_temp = *b;

    if (*a > *c)
    {
        *a = *c;
        *c = a_temp;
    }
    if (*a > *b)
    {
        *a = *b;
        *b = a_temp;
    }
    if (*b > *c)
    {
        *b = *c;
        *c = b_temp;
    }
}
